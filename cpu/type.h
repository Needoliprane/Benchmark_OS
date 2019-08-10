/*
** Needoliprane PROJECT, 2019
** Benchmark_OS_by_Needoliprane
** File description:
** type
*/

#ifndef TYPE_H
#define TYPE_H

#include <stdint.h>

#define low_16(address) (uint16_t)((address) & 0xFFFF)
#define high_16(address) (uint16_t)(((address) >> 16) & 0xFFFF)

#endif
