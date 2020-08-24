/*
 * tca9555.h
 *
 *  Created on: 2020. 1. 5.
 *      Author: JEONG
 */

#ifndef SRC_TCA9555_H_
#define SRC_TCA9555_H_
#include "main.h"
#include "stm32f1xx_hal_i2c.h"
#include "stm32f1xx_it.h"
#include "utils.h"

#define ID(id) (id << 1)

#define	INPUT_PORT0		0x00
#define INPUT_PORT1		0x01
#define OUTPUT_PORT0	0x02
#define OUTPUT_PORT1	0x03
#define POLINV_PORT0	0x04
#define	POLINV_PORT1	0x05
#define	CONFIG_PORT0	0x06
#define CONFIG_PORT1	0x07

#define PIN0	0b0000000000000001
#define PIN1	0b0000000000000010
#define PIN2	0b0000000000000100
#define PIN3	0b0000000000001000
#define PIN4	0b0000000000010000
#define PIN5	0b0000000000100000
#define PIN6	0b0000000001000000
#define PIN7	0b0000000010000000
#define PIN8	0b0000000100000000
#define PIN9	0b0000001000000000
#define PIN10	0b0000010000000000
#define PIN11	0b0000100000000000
#define PIN12	0b0001000000000000
#define PIN13	0b0010000000000000
#define PIN14	0b0100000000000000
#define PIN15	0b1000000000000000

class	TCA9555
{
public:
	void init(I2C_HandleTypeDef* _hi2c, uint16_t pin, uint8_t _id = 0x20);
	int set_output(uint8_t _pin, int state);
	uint8_t* get_input();
private:
	I2C_HandleTypeDef*	hi2c;
	uint8_t				id;
	uint8_t				output_pin[2];
};

#endif /* SRC_TCA9555_H_ */
