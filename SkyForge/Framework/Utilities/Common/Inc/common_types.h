#ifndef COMMON_TYPES_H
#define COMMON_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>

typedef enum
{
    SF_OK = 0,
    SF_ERROR,
    SF_BUSY,
    SF_TIMEOUT,
    SF_INVALID_PARAMETER,
    SF_NOT_SUPPORTED,
    SF_NOT_INITIALIZED

} SF_Status_t;

#ifdef __cplusplus
}
#endif

#endif
