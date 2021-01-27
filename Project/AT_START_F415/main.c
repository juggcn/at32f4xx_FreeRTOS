/**
  ******************************************************************************
  * File   :
  * Version: 
  * Date   :
  * Brief  : Main program body
  ******************************************************************************
  */

#include <stdio.h>
#include "at32f4xx.h"

#include "sys.h"

/*
*********************************************************************************************************
*                                                main()
*
* Description : This is the standard entry point for C code.  It is assumed that your code will call
*               main() once you have performed all necessary initialization.
*
* Arguments   : none
*
* Returns     : none
*********************************************************************************************************
*/

uint32_t ulTick = 0;

void vTskInit(void *argument)
{
  while (1)
  {
    ulTick++;
    vDelayMS(1000);
  }
}

int main(void)
{
  xTaskCreate(vTskInit, NULL, 256, NULL, 15, NULL);
  vTaskStartScheduler();
  while (1)
  {
  }
}
