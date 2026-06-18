#ifndef BSP_UART_H
#define BSP_UART_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32c0xx_hal.h"
#include "common_types.h"

SF_Status_t BSP_UART_Transmit(
        UART_HandleTypeDef *huart,
        const uint8_t *data,
        uint16_t size);

SF_Status_t BSP_UART_Receive(
        UART_HandleTypeDef *huart,
        uint8_t *data,
        uint16_t size);

#ifdef __cplusplus
}
#endif

#endif /* BSP_UART_H */
