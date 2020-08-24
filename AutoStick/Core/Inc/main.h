/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED0_Pin GPIO_PIN_13
#define LED0_GPIO_Port GPIOC
#define MOTOR11_PH_Pin GPIO_PIN_14
#define MOTOR11_PH_GPIO_Port GPIOC
#define MOTOR12_PH_Pin GPIO_PIN_15
#define MOTOR12_PH_GPIO_Port GPIOC
#define MOTOR7_IPROP_Pin GPIO_PIN_0
#define MOTOR7_IPROP_GPIO_Port GPIOC
#define MOTOR8_IPROP_Pin GPIO_PIN_1
#define MOTOR8_IPROP_GPIO_Port GPIOC
#define MOTOR9_IPROP_Pin GPIO_PIN_2
#define MOTOR9_IPROP_GPIO_Port GPIOC
#define MOTOR10_IPROP_Pin GPIO_PIN_3
#define MOTOR10_IPROP_GPIO_Port GPIOC
#define MOTOR9_PWM_Pin GPIO_PIN_0
#define MOTOR9_PWM_GPIO_Port GPIOA
#define MOTOR10_PWM_Pin GPIO_PIN_1
#define MOTOR10_PWM_GPIO_Port GPIOA
#define MOTOR11_PWM_Pin GPIO_PIN_2
#define MOTOR11_PWM_GPIO_Port GPIOA
#define MOTOR12_PWM_Pin GPIO_PIN_3
#define MOTOR12_PWM_GPIO_Port GPIOA
#define MOTOR1_IPROP_Pin GPIO_PIN_4
#define MOTOR1_IPROP_GPIO_Port GPIOA
#define MOTOR2_IPROP_Pin GPIO_PIN_5
#define MOTOR2_IPROP_GPIO_Port GPIOA
#define MOTOR3_IPROP_Pin GPIO_PIN_6
#define MOTOR3_IPROP_GPIO_Port GPIOA
#define MOTOR4_IPROP_Pin GPIO_PIN_7
#define MOTOR4_IPROP_GPIO_Port GPIOA
#define MOTOR11_IPROP_Pin GPIO_PIN_4
#define MOTOR11_IPROP_GPIO_Port GPIOC
#define MOTOR12_IPROP_Pin GPIO_PIN_5
#define MOTOR12_IPROP_GPIO_Port GPIOC
#define MOTOR5_IPROP_Pin GPIO_PIN_0
#define MOTOR5_IPROP_GPIO_Port GPIOB
#define MOTOR6_IPROP_Pin GPIO_PIN_1
#define MOTOR6_IPROP_GPIO_Port GPIOB
#define MOTOR1_PH_Pin GPIO_PIN_2
#define MOTOR1_PH_GPIO_Port GPIOB
#define MOTOR3_PWM_Pin GPIO_PIN_10
#define MOTOR3_PWM_GPIO_Port GPIOB
#define MOTOR4_PWM_Pin GPIO_PIN_11
#define MOTOR4_PWM_GPIO_Port GPIOB
#define MOTOR2_PH_Pin GPIO_PIN_12
#define MOTOR2_PH_GPIO_Port GPIOB
#define MOTOR3_PH_Pin GPIO_PIN_13
#define MOTOR3_PH_GPIO_Port GPIOB
#define MOTOR4_PH_Pin GPIO_PIN_14
#define MOTOR4_PH_GPIO_Port GPIOB
#define MOTOR5_PH_Pin GPIO_PIN_15
#define MOTOR5_PH_GPIO_Port GPIOB
#define MOTOR5_PWM_Pin GPIO_PIN_6
#define MOTOR5_PWM_GPIO_Port GPIOC
#define MOTOR6_PWM_Pin GPIO_PIN_7
#define MOTOR6_PWM_GPIO_Port GPIOC
#define MOTOR7_PWM_Pin GPIO_PIN_8
#define MOTOR7_PWM_GPIO_Port GPIOC
#define MOTOR8_PWM_Pin GPIO_PIN_9
#define MOTOR8_PWM_GPIO_Port GPIOC
#define MOTOR6_PH_Pin GPIO_PIN_8
#define MOTOR6_PH_GPIO_Port GPIOA
#define MOTOR1_PWM_Pin GPIO_PIN_15
#define MOTOR1_PWM_GPIO_Port GPIOA
#define GPIO_INT_Pin GPIO_PIN_11
#define GPIO_INT_GPIO_Port GPIOC
#define GPIO_INT_EXTI_IRQn EXTI15_10_IRQn
#define MOTOR2_PWM_Pin GPIO_PIN_3
#define MOTOR2_PWM_GPIO_Port GPIOB
#define MOTOR7_PH_Pin GPIO_PIN_4
#define MOTOR7_PH_GPIO_Port GPIOB
#define MOTOR8_PH_Pin GPIO_PIN_5
#define MOTOR8_PH_GPIO_Port GPIOB
#define MOTOR9_PH_Pin GPIO_PIN_8
#define MOTOR9_PH_GPIO_Port GPIOB
#define MOTOR10_PH_Pin GPIO_PIN_9
#define MOTOR10_PH_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
