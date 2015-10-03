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

void insertionSort(int a[], size_t nitems, ORDER order) {
    for(int j=1; j<nitems; j++) {
        int key = a[j];
        int i = j - 1;
        switch(order) {
            case ORDER_ND:
                while(i>=0 && a[i]>key) {
                    a[i+1] = a[i];
                    --i;
                }
                break;
            case ORDER_NA:
                while(i>=0 && a[i]<key) {
                    a[i+1] = a[i];
                    --i;
                }
                break;
            default: return;
        }
        a[i+1] = key;
    }
}

