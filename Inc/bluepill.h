/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : bluepill.h
  * @brief          : Header for bluepill.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  */

#ifndef BLUEPILL_H
#define BLUEPILL_H

#include "stm32f1xx_hal.h"

#define HIGH GPIO_PIN_SET
#define LOW GPIO_PIN_RESET

#define PORT_ONBOARD_LED GPIOC
#define PIN_ONBOARD_LED GPIO_PIN_13

void on_Led(void);
void off_Led(void);


#endif
