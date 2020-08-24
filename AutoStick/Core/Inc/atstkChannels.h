/*
 * atstkChannels1.h
 *
 *  Created on: 2020. 5. 6.
 *      Author: JEONG
 */

#ifndef ATSTKCHANNELS_H_
#define ATSTKCHANNELS_H_

#include "main.h"

#include "atstkChannel.h"
#include "midiTypes.h"

class atstkChannels
{
private:
	atstkChannel 		channels[CHANNEL_COUNT];
	ADC_HandleTypeDef*	adcs[3];
	I2C_HandleTypeDef*	hi2c;
	int 				motor_adc[CHANNEL_COUNT] = {0, 1, 2, 3, 4, 5, 10, 11, 6, 7, 8, 9};
												// |----adc1----|----adc2----|----adc3---|

public:
	atstkChannels(){};
	void set_configs(channelConfig* configs, ADC_HandleTypeDef** _adcs, I2C_HandleTypeDef* _hi2c);
	void loop();
	void set(const USBMIDIEventPacket& midi);
};




#endif /* ATSTKCHANNELS_H_ */
