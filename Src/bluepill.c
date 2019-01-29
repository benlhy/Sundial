#include "bluepill.h"

void on_Led(void){
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, LOW); // LOW to turn on LED
}

void off_Led(void){
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, HIGH);
}
