/*
 * TCA9555.cpp
 *
 *  Created on: 2020. 5. 22.
 *      Author: JEONG
 */




#include "TCA9555.h"

void TCA9555::init(I2C_HandleTypeDef* _hi2c, uint16_t pin, uint8_t _id)
{
	hi2c	= _hi2c;
	id		= ID(_id);
	uint8_t config_port0[2] = {CONFIG_PORT0, (uint8_t)(pin & 0xff)}, config_port1[2] = {CONFIG_PORT1, (uint8_t)(pin >> 8)};

	/* config I/O input_pin */
	while(HAL_I2C_Master_Transmit(hi2c, id, config_port0, 2, 10000) != HAL_OK);
	while(HAL_I2C_Master_Transmit(hi2c, id, config_port1, 2, 10000) != HAL_OK);

	/* reset output input_pin */
	uint8_t output_reset[2] = {OUTPUT_PORT0, 0x00};
	while(HAL_I2C_Master_Transmit(hi2c, id, output_reset, 2, 10000) != HAL_OK);
	output_reset[0] = OUTPUT_PORT1;
	while(HAL_I2C_Master_Transmit(hi2c, id, output_reset, 2, 10000) != HAL_OK);

	output_pin[0] = 0x0;
	output_pin[1] = 0x0;
}

int TCA9555::set_output(uint8_t _pin, int state)
{
	if(_pin > 15) return 1;
	uint8_t port = _pin >= 8 ? OUTPUT_PORT1 : OUTPUT_PORT0;
	int ind = port & 0x1;
	if(state == HIGH)
		output_pin[ind]  |= 1 << (_pin % 8);		//set pin
	else
		output_pin[ind]  &= ~(1 << (_pin % 8));		//reset pin

	uint8_t pData[2] = {port, output_pin[ind]};
	while(HAL_I2C_Master_Transmit(hi2c, id, pData, 2, 10000) != HAL_OK);

	return 0;
}

/* get input I/O */
uint8_t* TCA9555::get_input()
{
	static uint8_t input_pin[16] = {0, };
	uint8_t input[2] = {0, };

	uint8_t mode = INPUT_PORT0;
	while(HAL_I2C_Master_Transmit(hi2c, id, &mode, 1, 10000) != HAL_OK);
	while(HAL_I2C_Master_Receive(hi2c, id | 0x01, &input[0], 1, 10000) != HAL_OK);

	mode = INPUT_PORT1;
	while(HAL_I2C_Master_Transmit(hi2c, id, &mode, 1, 10000) != HAL_OK);
	while(HAL_I2C_Master_Receive(hi2c, id | 0x01, &input[1], 1, 10000) != HAL_OK);

	for(int i = 0; i < 8; ++i)
	{
		input_pin[i] = (input[0] >> i) & 0x01;
	}

	for(int i = 0; i < 8; ++i)
	{
		input_pin[i + 8] = (input[1] >> i) & 0x01;
	}

	return input_pin;
}
