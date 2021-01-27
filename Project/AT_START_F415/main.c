/**
  ******************************************************************************
  * File   : GPIO/LED_Toggle/main.c
  * Version: V1.2.8
  * Date   : 2020-11-27
  * Brief  : Main program body
  ******************************************************************************
  */

#include <stdio.h>
#include "at32f4xx.h"
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

uint32_t ulCnt = 0;
int main(void)
{

  while (1)
  {
    ulCnt++;
  }
  return (0u);
}
