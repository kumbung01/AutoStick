/*
 * LEDHandler.cpp
 *
 *  Created on: 2020. 5. 7.
 *      Author: JEONG
 */




#include "LEDHandler.h"

void LEDHandler::init(UART_HandleTypeDef* _esp, TCA9555* _tca)
{
	esp = _esp;
	tca = _tca;
}

void LEDHandler::set(const USBMIDIEventPacket& midi)
{
	uint8_t led_num = (midi.Data1 - OFFSET) / CHANNEL_COUNT;
	bool onoff		= midi.Data0 == MIDI_NOTE_ON;

	if(led_num < ESP_LED_COUNT)	// LED count on ESP32 is 10, so 0 ~ 9.
	{
		uint8_t buffer[3] = {'m', led_num, (uint8_t)onoff};
		HAL_UART_Transmit(esp, buffer, sizeof(buffer), 10);
	}
	else
	{
		if(led_num == 10)
		{
			tca->set_output(LED_G11, HIGH);
			tca->set_output(LED_R11, LOW);
		}
		else if(led_num == 11)
		{
			tca->set_output(LED_G12, HIGH);
			tca->set_output(LED_R12, LOW);
		}
	}
}
