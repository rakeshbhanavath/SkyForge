
#include "bsp_uart.h"

SF_Status_t BSP_UART_Transmit(
        UART_HandleTypeDef *huart,
        const uint8_t *data,
        uint16_t size)
{
    HAL_StatusTypeDef status;

    status = HAL_UART_Transmit(
            huart,
            (uint8_t *)data,
            size,
            HAL_MAX_DELAY);

    switch(status)
    {
        case HAL_OK:
            return SF_OK;

        case HAL_BUSY:
            return SF_BUSY;

        case HAL_TIMEOUT:
            return SF_TIMEOUT;

        default:
            return SF_ERROR;
    }
}

SF_Status_t BSP_UART_Receive(
        UART_HandleTypeDef *huart,
        uint8_t *data,
        uint16_t size)
{
    HAL_StatusTypeDef status;

    status = HAL_UART_Receive(
            huart,
            data,
            size,
            HAL_MAX_DELAY);

    switch(status)
    {
        case HAL_OK:
            return SF_OK;

        case HAL_BUSY:
            return SF_BUSY;

        case HAL_TIMEOUT:
            return SF_TIMEOUT;

        default:
            return SF_ERROR;
    }
}
