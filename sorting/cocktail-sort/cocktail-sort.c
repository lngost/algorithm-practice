/*
 *  Author: lngost
 *  See https://github.com/lngost/algorithm-practice
 */

#include <stdlib.h>
#include <stdbool.h>

#ifndef _ORDER_DEFINED_
#define _ORDER_DEFINED_

typedef const int ORDER;
#define ORDER_ND 1 // non-descending
#define ORDER_NA 2 // non-ascending

#endif

static void swap(int a[], int index1, int index2) {
    int temp = a[index1];
    a[index1] = a[index2];
    a[index2] = temp;
}

static bool comp(int a[], int index1, int index2, ORDER order) {
    bool sorted = true;
    switch(order) {
        case ORDER_ND:
            if(a[index1] > a[index2]) {
                swap(a, index1, index2);
                sorted = false;
            }
            break;
        case ORDER_NA:
            if(a[index1] < a[index2]) {
                swap(a, index1, index2);
                sorted = false;
            }
            break;
        default: break;
    }
    
    return sorted;
}

void cocktailSort(int a[], size_t nitems, ORDER order) {
    bool sorted = false;
    int begin = -1;
    int end = nitems - 2;
    while(!sorted) {
        sorted = true;
        ++begin;
        for(int i=begin; i<=end; ++i) {
            sorted = comp(a, i, i+1, order);
        }
        if(sorted) {
            break;
        }
        sorted = true;
        --end;
        for(int i=end; i>=begin; --i) {
            sorted = comp(a, i, i+1, order);
        }
    }
}

