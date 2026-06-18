#ifndef BSP_TIME_H
#define BSP_TIME_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void BSP_Delay(uint32_t milliseconds);

uint32_t BSP_GetTick(void);

#ifdef __cplusplus
}
#endif

#endif /* BSP_TIME_H */
