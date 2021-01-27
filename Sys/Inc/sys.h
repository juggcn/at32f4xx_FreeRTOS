#ifndef __SYS_H__
#define __SYS_H__

#include "at32f4xx.h"

#include "math.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "event_groups.h"
#include "semphr.h"
#include "timers.h"
#include "croutine.h"
#include "stream_buffer.h"

#include "delay.h"
#include "cpu_utils.h"

#define GPIO_WRITE_PIN(port, pin, val) ((val) != 0 ? (port->BSRR = pin) : (port->BSRR = (pin << 16u)))
// #define GPIO_WRITE_PIN(port, pin, val) HAL_GPIO_WritePin(port, pin, val)
#define GPIO_READ_PIN(port, pin) (port->IDR & pin ? 1 : 0)
#define GPIO_WRITE_LOW8(GPIOx, a) (GPIOx->BSRR = (((uint32_t)(uint8_t) ~(a)) << 16) | ((uint32_t)(uint8_t)(a)))
#define GPIO_WRITE_HIGH8(GPIOx, a) (GPIOx->BSRR = (((uint32_t)(uint8_t) ~(a)) << 24) | (((uint32_t)(uint8_t)(a)) << 8))
#define GPIO_WRITE(GPIOx, a) (GPIOx->BSRR = (((uint32_t)(uint16_t) ~(a)) << 16) | ((uint32_t)(uint16_t)(a)))
#define GPIO_READ_LOW8(GPIOx) (GPIOx->IDR & 0x00ff)
#define GPIO_READ_HIGH8(GPIOx) ((GPIOx->IDR >> 8) & 0x00ff)
#define GPIO_READ(GPIOx) (GPIOx->IDR)

#endif
