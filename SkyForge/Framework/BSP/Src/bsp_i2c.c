#include "bsp_i2c.h"
#include "common_types.h"

SF_Status_t BSP_I2C_Read(
        I2C_HandleTypeDef *hi2c,
        uint16_t deviceAddress,
        uint16_t registerAddress,
        uint8_t *data,
        uint16_t size)
{
    return HAL_I2C_Mem_Read(
            hi2c,
            deviceAddress,
            registerAddress,
            I2C_MEMADD_SIZE_8BIT,
            data,
            size,
            HAL_MAX_DELAY);
}

SF_Status_t BSP_I2C_Write(
        I2C_HandleTypeDef *hi2c,
        uint16_t deviceAddress,
        uint16_t registerAddress,
        uint8_t *data,
        uint16_t size)
{
    return HAL_I2C_Mem_Write(
            hi2c,
            deviceAddress,
            registerAddress,
            I2C_MEMADD_SIZE_8BIT,
            data,
            size,
            HAL_MAX_DELAY);
}
