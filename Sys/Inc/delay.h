#ifndef __DELAY_H__
#define __DELAY_H__

#include "sys.h"

#define portMS_PERIOD_TICK (configTICK_RATE_HZ / (TickType_t)1000)

__STATIC_INLINE void vDelayUS(__IO uint32_t ulMicros)
{
	uint32_t ulTick, ulDelayPeriod;
	ulTick = xTaskGetTickCount();
	ulDelayPeriod = ulMicros * configTICK_RATE_HZ / 1000000;
	do
	{

	} while ((xTaskGetTickCount() - ulTick) < ulDelayPeriod);
}

__STATIC_INLINE void vDelayMS(__IO uint32_t ulMillis)
{
	vTaskDelay(ulMillis * portMS_PERIOD_TICK);
}

#endif
