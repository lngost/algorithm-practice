/*
 *  Author: lngost
 *  See https://github.com/lngost/algorithm-practice
 */

#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef _ORDER_DEFINED_
#define _ORDER_DEFINED_

typedef const int ORDER;
#define ORDER_ND 1 // non-descending
#define ORDER_NA 2 // non-ascending

#endif

#define ARRAY_SIZE 10
extern void bubbleSort(int a[], size_t nitems, ORDER order);

#endif

