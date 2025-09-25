/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define enm0_Pin GPIO_PIN_2
#define enm0_GPIO_Port GPIOA
#define enm1_Pin GPIO_PIN_3
#define enm1_GPIO_Port GPIOA
#define DOT_Pin GPIO_PIN_4
#define DOT_GPIO_Port GPIOA
#define Red_Led_Pin GPIO_PIN_5
#define Red_Led_GPIO_Port GPIOA
#define en0_Pin GPIO_PIN_6
#define en0_GPIO_Port GPIOA
#define en1_Pin GPIO_PIN_7
#define en1_GPIO_Port GPIOA
#define a_Pin GPIO_PIN_0
#define a_GPIO_Port GPIOB
#define b_Pin GPIO_PIN_1
#define b_GPIO_Port GPIOB
#define c_Pin GPIO_PIN_2
#define c_GPIO_Port GPIOB
#define c2_Pin GPIO_PIN_10
#define c2_GPIO_Port GPIOB
#define c3_Pin GPIO_PIN_11
#define c3_GPIO_Port GPIOB
#define c4_Pin GPIO_PIN_12
#define c4_GPIO_Port GPIOB
#define c5_Pin GPIO_PIN_13
#define c5_GPIO_Port GPIOB
#define c6_Pin GPIO_PIN_14
#define c6_GPIO_Port GPIOB
#define c7_Pin GPIO_PIN_15
#define c7_GPIO_Port GPIOB
#define en2_Pin GPIO_PIN_8
#define en2_GPIO_Port GPIOA
#define en3_Pin GPIO_PIN_9
#define en3_GPIO_Port GPIOA
#define enm2_Pin GPIO_PIN_10
#define enm2_GPIO_Port GPIOA
#define enm3_Pin GPIO_PIN_11
#define enm3_GPIO_Port GPIOA
#define enm4_Pin GPIO_PIN_12
#define enm4_GPIO_Port GPIOA
#define enm5_Pin GPIO_PIN_13
#define enm5_GPIO_Port GPIOA
#define enm6_Pin GPIO_PIN_14
#define enm6_GPIO_Port GPIOA
#define enm7_Pin GPIO_PIN_15
#define enm7_GPIO_Port GPIOA
#define d_Pin GPIO_PIN_3
#define d_GPIO_Port GPIOB
#define e_Pin GPIO_PIN_4
#define e_GPIO_Port GPIOB
#define f_Pin GPIO_PIN_5
#define f_GPIO_Port GPIOB
#define g_Pin GPIO_PIN_6
#define g_GPIO_Port GPIOB
#define c0_Pin GPIO_PIN_8
#define c0_GPIO_Port GPIOB
#define c1_Pin GPIO_PIN_9
#define c1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
