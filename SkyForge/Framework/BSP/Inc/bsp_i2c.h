#ifndef BSP_I2C_H
#define BSP_I2C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32c0xx_hal.h"

SF_Status_t BSP_I2C_Read(
        I2C_HandleTypeDef *hi2c,
        uint16_t deviceAddress,
        uint16_t registerAddress,
        uint8_t *data,
        uint16_t size);

SF_Status_t BSP_I2C_Write(
        I2C_HandleTypeDef *hi2c,
        uint16_t deviceAddress,
        uint16_t registerAddress,
        uint8_t *data,
        uint16_t size);

#ifdef __cplusplus
}
#endif

#endif
