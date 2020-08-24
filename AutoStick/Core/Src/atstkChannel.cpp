/*
 * atstkChannel1.cpp
 *
 *  Created on: 2020. 5. 5.
 *      Author: JEONG
 */




#include "atstkChannel.h"
#include "cmsis_os.h"
/* public member methods */

/* initializer */
void atstkChannel::set_config(GPIO_TypeDef* _ph_port, uint8_t _ph_pin, TIM_HandleTypeDef* _timer, uint8_t _channel)
{
	channel_state	= IDLE;
	is_set			= false;
	fault 			= false;
	cur_vel			= 0;
	before 			= 0;
	now				= 0;

	ph_port			= _ph_port;
	ph_pin			= _ph_pin;
	timer			= _timer;
	channel			= _channel;

	HAL_TIM_PWM_Start(timer, channel);
}

/* set velocity and state */
void atstkChannel::set(uint8_t vel)
{
	cur_vel 		= map(vel, 0, 127, 0, PWM_MAX);
	is_set			= true;
}

/* set stick upward */
void atstkChannel::init()
{
	setMotor(UP);
	channel_state = UP;
}

/* motor loop */
void atstkChannel::loop()
{
	switch(channel_state)
	{
	case IDLE:
		idle();
		break;
	case DOWN:
		down();
		break;
	case UP:
		up();
		break;
	}
}

/* set fault flag */
void atstkChannel::set_fault(bool _fault)
{
	fault = _fault;				// set flag
	if(fault) setMotor(IDLE);	// set motor velocity to 0 if fault
}

/* private member methods */

/* set motor direction and power */
void atstkChannel::setMotor(uint8_t state)
{

	uint16_t velocity 		= (state == UP   ? cur_vel      : 0);	// 0       when IDLE
																	// cur_vel when UP
																	// 0	   when DOWN(PWM_MAX - PWM_MAX)
	GPIO_PinState pin_state = (state == DOWN ? GPIO_PIN_SET : GPIO_PIN_RESET);
																	// SET for DOWN, RESET for UP

	HAL_GPIO_WritePin(ph_port, ph_pin, pin_state);					// set ENABLE pin
	__HAL_TIM_SET_COMPARE(timer, channel, velocity);			// set PWM pin
}

/* when channel is idle && not fault && is set, set channel state to DOWN */
void atstkChannel::idle()
{
	if(!fault && is_set)
	{
		channel_state = DOWN;
	}
}

/* wait for DTIME and set UP */
void atstkChannel::down()
{
	is_set 	= false;
	//now 	= HAL_GetTick();
	now		= osKernelSysTick();
	if(now - before > DTIME)
	{
		setMotor(UP);
		channel_state 	= UP;
		before 			= now;
	}
}

/* wait for UTIME and set IDLE, or wait for MIN_UTIME and set DOWN if channel is set */
void atstkChannel::up()
{
	//now = HAL_GetTick();
	now = osKernelSysTick();
	if(now - before > (is_set ? MIN_UTIME : UTIME))
	{
		channel_state = (is_set ? DOWN : IDLE);
		setMotor(channel_state);
		before = now;
	}
}

