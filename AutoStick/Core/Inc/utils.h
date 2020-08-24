/*
 * utils.h
 *
 *  Created on: Dec 28, 2019
 *      Author: JEONG
 */

#ifndef SRC_UTILS_H_
#define SRC_UTILS_H_

#include "main.h"
#define PWM_MAX 0xffff

/* adc */
#define APROP	0.001
#define RPROP	1500
#define VREF	3.3
#define CUR_TH	2.2

enum {LOW, HIGH};

#define OFFSET	0

/* motor */
enum{DOWN, UP};
#define CHANNEL_COUNT	12
#define MOTOR_DELAY 	30
#define UTIME			100		// miltime of up
#define DTIME			60		// miltime of down
#define MIN_UTIME  		40		// minimal time of up

#define ESP_LED_COUNT	10

long map(long x, long in_min, long in_max, long out_min, long out_max);

struct channelConfig
{
	TIM_HandleTypeDef*	timer;			// timer info
	uint8_t				channel;		// channel info

	/* ENABLE pin configuration */
	GPIO_TypeDef*		ph_port;		// ph port info
	uint16_t			ph_pin;			// ph pin info
};


/* struct for TCA9555 */



#endif /* SRC_UTILS_H_ */
