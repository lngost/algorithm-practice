/*
 *  Author: lngost
 *  See https://github.com/lngost/algorithm-practice
 */

#include <stdlib.h>
#include <math.h>

#ifndef _ORDER_DEFINED_
#define _ORDER_DEFINED_

typedef const int ORDER;
#define ORDER_ND 1 // non-descending
#define ORDER_NA 2 // non-ascending

#endif

static void merge(int a[], int p, int q, int r, ORDER order) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int *lArray = malloc(n1 * sizeof(int));
    int *rArray = malloc(n2 * sizeof(int));
    
    for(int i=0; i<n1; i++) {
        lArray[i] = a[p+i];
    }
    for(int j=0; j<n2; j++) {
        rArray[j] = a[q+j+1];
    }
    
    int i = 0;
    int j = 0;
    switch(order) {
        case ORDER_ND:
            for(int k = p; k <= r; k++) {
                if(j >= n2 || (i < n1 && lArray[i] <= rArray[j])) {
                    a[k] = lArray[i];
                    ++i;
                } else {
                    a[k] = rArray[j];
                    ++j;
                }
            }
            break;
        case ORDER_NA:
            for(int k = p; k <= r; k++) {
                if(j >= n2 || (i < n1 && lArray[i] >= rArray[j])) {
                    a[k] = lArray[i];
                    ++i;
                } else {
                    a[k] = rArray[j];
                    ++j;
                }
            }
            break;
        default: break;
    }
    
    free(lArray);
    free(rArray);
}

void mergeSort(int a[], int p, int r, ORDER order) {
    if(p < r) {
        int q = (int)floor((p+r)/2);
        mergeSort(a, p, q, order);
        mergeSort(a, q+1, r, order);
        merge(a, p, q, r, order);
    }
}

