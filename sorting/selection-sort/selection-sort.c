/*
 *  Author: lngost
 *  See https://github.com/lngost/algorithm-practice
 */

#include <stdlib.h>

#ifndef _ORDER_DEFINED_
#define _ORDER_DEFINED_

typedef const int ORDER;
#define ORDER_ND 1 // non-descending
#define ORDER_NA 2 // non-ascending

#endif

void selectionSort(int a[], size_t nitems, ORDER order) {
    for(int i=0; i<nitems-1; i++) {
        int index = i;
        for(int j=i+1; j<nitems; j++) {
            switch(order) {
                case ORDER_ND:
                    if(a[j] < a[index]) index = j;
                    break;
                case ORDER_NA:
                    if(a[j] > a[index]) index = j;
                    break;
                default: return;
            }
        }
        int temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }
}

