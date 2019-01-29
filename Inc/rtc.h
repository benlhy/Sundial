/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : bluepill.h
  * @brief          : Header for bluepill.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  */


#ifndef RTC_H
#define RTC_H

#include "stm32f1xx_hal.h"

extern RTC_HandleTypeDef hrtc;


#define DAY (((__DATE__[4] >= '0') ? (__DATE__[4])-'0' : 0))*10+(__DATE__[ 5])-'0'

#define MONTH (\
  __DATE__ [2] == 'n' ? (__DATE__ [1] == 'a' ? 1 : 6) \
: __DATE__ [2] == 'b' ? 2 \
: __DATE__ [2] == 'r' ? (__DATE__ [0] == 'M' ? 3 : 4) \
: __DATE__ [2] == 'y' ? 5 \
: __DATE__ [2] == 'l' ? 7 \
: __DATE__ [2] == 'g' ? 8 \
: __DATE__ [2] == 'p' ? 9 \
: __DATE__ [2] == 't' ? 10 \
: __DATE__ [2] == 'v' ? 11 \
: 12)



#define HOUR_CHAR 0
#define HOUR (((__TIME__)[HOUR_CHAR + 0] - '0') * 10 + ((__TIME__)[HOUR_CHAR + 1] - '0') * 1)

#define MINUTE_CHAR 3
#define MINUTE (\
                ((__TIME__)[MINUTE_CHAR + 0] - '0') * 10 + \
                ((__TIME__)[MINUTE_CHAR + 1] - '0') * 1    \
				)

#define SECOND_CHAR 6
#define SECOND (\
                ((__TIME__)[SECOND_CHAR + 0] - '0') * 10 + \
                ((__TIME__)[SECOND_CHAR + 1] - '0') * 1    \
				)

#define YEAR_CHAR 7
#define YEAR  (\
                ((__DATE__)[YEAR_CHAR + 0] - '0') * 1000 + \
                ((__DATE__)[YEAR_CHAR + 1] - '0') * 100  + \
                ((__DATE__)[YEAR_CHAR + 2] - '0') * 10   + \
                ((__DATE__)[YEAR_CHAR + 3] - '0') * 1      \
              )

void Set_Current_Time();
int dayofweek(int d, int m, int y);

#endif
