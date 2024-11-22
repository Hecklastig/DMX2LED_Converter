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
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#define DMX_ADDR0_Pin GPIO_PIN_0
#define DMX_ADDR0_GPIO_Port GPIOA
#define DMX_ADDR1_Pin GPIO_PIN_1
#define DMX_ADDR1_GPIO_Port GPIOA
#define DMX_ADDR2_Pin GPIO_PIN_2
#define DMX_ADDR2_GPIO_Port GPIOA
#define DMX_ADDR3_Pin GPIO_PIN_5
#define DMX_ADDR3_GPIO_Port GPIOA
#define RGB_LED_RED_Pin GPIO_PIN_6
#define RGB_LED_RED_GPIO_Port GPIOA
#define RGB_LED_GREEN_Pin GPIO_PIN_7
#define RGB_LED_GREEN_GPIO_Port GPIOA
#define RGB_LED_BLUE_Pin GPIO_PIN_0
#define RGB_LED_BLUE_GPIO_Port GPIOB
#define DMX_ADDR4_Pin GPIO_PIN_1
#define DMX_ADDR4_GPIO_Port GPIOB
#define DMX_ADDR5_Pin GPIO_PIN_2
#define DMX_ADDR5_GPIO_Port GPIOB
#define DMX_ADDR6_Pin GPIO_PIN_10
#define DMX_ADDR6_GPIO_Port GPIOB
#define DMX_ADDR7_Pin GPIO_PIN_11
#define DMX_ADDR7_GPIO_Port GPIOB
#define LED_DAT_Pin GPIO_PIN_15
#define LED_DAT_GPIO_Port GPIOB
#define RS485_TX_Pin GPIO_PIN_9
#define RS485_TX_GPIO_Port GPIOA
#define RS485_RX_Pin GPIO_PIN_10
#define RS485_RX_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
