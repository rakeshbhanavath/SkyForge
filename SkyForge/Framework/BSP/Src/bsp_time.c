#include "bsp_time.h"

#include "stm32c0xx_hal.h"

void BSP_Delay(uint32_t milliseconds)
{
    HAL_Delay(milliseconds);
}

uint32_t BSP_GetTick(void)
{
    return HAL_GetTick();
}
