/*
 * atstkChannels1.cpp
 *
 *  Created on: 2020. 5. 6.
 *      Author: JEONG
 */




#include "atstkChannels.h"

void atstkChannels::set_configs(channelConfig* configs, ADC_HandleTypeDef** _adcs, I2C_HandleTypeDef* _hi2c)
{
	/* set config of individual channel */
	for(int i = 0; i < CHANNEL_COUNT; ++i)
	{
		channels[i].set_config(configs[i].ph_port, configs[i].ph_pin, configs[i].timer, configs[i].channel);
	}

	/* set adc handler */
	for(int i = 0; i < 3; ++i)
	{
		adcs[i] = _adcs[i];
	}

	/* set i2c handler */
	hi2c = _hi2c;

	/* set stick UP */
	for(int i = 0; i < CHANNEL_COUNT; ++i)
	{
		channels[i].init();
	}
}

void atstkChannels::loop()
{
	for(int i = 0; i < CHANNEL_COUNT; ++i)
	{
		channels[i].loop();
	}
}

void atstkChannels::set(const USBMIDIEventPacket& midi)
{
	if(midi.Data0 == MIDI_NOTE_ON)
	{
		int channel_num = (midi.Data1 - OFFSET) % CHANNEL_COUNT;
		channels[channel_num].set(midi.Data2);
	}
}


/* private member methods */


