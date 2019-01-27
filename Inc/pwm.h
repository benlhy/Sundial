#ifndef PWM_H
#define PWM_H

#include "stm32f1xx_hal.h"

void setPWM(TIM_HandleTypeDef, uint32_t, uint16_t, uint16_t);


#endif
