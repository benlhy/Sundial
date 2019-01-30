#include "rtc.h"


int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}



void Set_Current_Time()
{


  RTC_TimeTypeDef sTime = {0};
  RTC_DateTypeDef DateToUpdate = {0};
/*
  time_t rawtime;
  struct tm * timeinfo;
  time ( &rawtime );
  timeinfo = localtime( &rawtime );
*/


  /**Set the time to current time.
  */
  sTime.Hours = HOUR;
  sTime.Minutes = MINUTE;
  sTime.Seconds = SECOND;

  if (HAL_RTC_SetTime(&hrtc, &sTime, RTC_FORMAT_BCD) != HAL_OK)
  {
    //handle error here
  }
  uint8_t day = DAY;
  uint8_t month= MONTH;
  uint8_t year = YEAR;


  //DateToUpdate.WeekDay = RTC_WEEKDAY_MONDAY;
  //DateToUpdate.Month = RTC_MONTH_JANUARY;
  DateToUpdate.WeekDay = dayofweek(DAY,MONTH,YEAR);
  DateToUpdate.Month = MONTH;
  DateToUpdate.Date = DAY;
  DateToUpdate.Year = YEAR-2000; // it is 100 years, so we set it to reference year 2000

  if (HAL_RTC_SetDate(&hrtc, &DateToUpdate, RTC_FORMAT_BCD) != HAL_OK)
  {
    //Error_Handler();
	//crap
  }


}
