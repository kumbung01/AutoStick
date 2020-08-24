/*
 * LEDHandler.h
 *
 *  Created on: 2020. 5. 7.
 *      Author: JEONG
 */

#ifndef LEDHANDLER_H_
#define LEDHANDLER_H_

//#include "main.h"
#include "midiTypes.h"
#include "TCA9555.h"
#include "utils.h"

#define LED_R11	16
#define	LED_G11	15
#define LED_R12	14
#define LED_G12	13

class LEDHandler
{
private:
	UART_HandleTypeDef* esp;	// send LED command to ESP32 via UART5
	TCA9555*			tca;	// send LED command to TCA9555 via I2C
public:
	void init(UART_HandleTypeDef* _esp, TCA9555* _tca);
	void set(const USBMIDIEventPacket& midi);
};

#endif /* LEDHANDLER_H_ */
