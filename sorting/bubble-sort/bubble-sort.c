/*
 *  Author: lngost
 *  See https://github.com/lngost/algorithm-practice

    bubble sort
    
    note:
        Normally the time complexity of bubble sort is O(n^2), 
        however the time complexity on best case may be different 
        depending on patterns used, it would be θ(n) or θ(n^2).
        There is no difference on worst case, both θ(n^2).
        
        For the coding in this file, the pattern which time complexity 
        on best case is θ(n) is used.
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

void bubbleSort(int a[], size_t nitems, ORDER order) {
    bool sorted = false;
    int unsorted_head = 0;
    while(!sorted && unsorted_head < nitems) {
        sorted = true;
        for(int i=nitems-1; i>unsorted_head; --i) {
            switch(order) {
                case ORDER_ND:
                    if(a[i] < a[i-1]) {
                        swap(a, i, i-1);
                        sorted = false;
                    }
                    break;
                case ORDER_NA:
                    if(a[i] > a[i-1]) {
                        swap(a, i, i-1);
                        sorted = false;
                    }
                    break;
                default: break;
            }
        }
        ++unsorted_head;
    }
}

