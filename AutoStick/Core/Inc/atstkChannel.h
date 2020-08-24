/*
 * atstkChannel1.h
 *
 *  Created on: 2020. 5. 5.
 *      Author: JEONG
 */

#ifndef ATSTKCHANNEL_H_
#define ATSTKCHANNEL_H_
#include "main.h"

#include "utils.h"

class atstkChannel
{
private:
	/* state machine info */
	enum{IDLE, DOWN, UP};				// enum of channel state
	int		 			channel_state;	// current state of this channel

	/* PWM pin configuration */
	TIM_HandleTypeDef*	timer;			// timer info
	uint8_t				channel;		// channel info

	/* ENABLE pin configuration */
	GPIO_TypeDef*		ph_port;		// ph port info
	uint16_t			ph_pin;			// ph pin info

	/* flags */
	bool				is_set;			// state flag if it is set
	bool				fault;			// state flag if it is fault or not

	uint16_t			cur_vel;		// DOWN velocity of midi data
	uint32_t			now, before;
	void setMotor(uint8_t state);

	/* state methods */
	void idle();
	void down();
	void up();
public:
	atstkChannel(){};
	void set_config(GPIO_TypeDef* _ph_port, uint8_t _ph_pin, TIM_HandleTypeDef* _timer, uint8_t _channel);
	void set(uint8_t vel);
	void set_fault(bool _fault);
	void init();
	void loop();

};


#endif /* ATSTKCHANNEL_H_ */
