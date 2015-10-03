/*
 *  Author: lngost
 *  See https://github.com/lngost/algorithm-practice
 */

#include <stdlib.h>
#include <math.h>

int binarySearch(int a[], int p, int r, const int key) {
    if(p <= r) {
        int q = (int)floor((p+r)/2);
        if(key == a[q]) {
            return q;
        } else if(key < a[q]) {
            return binarySearch(a, p, q-1, key);
        } else if(key > a[q]) {
            return binarySearch(a, q+1, r, key);
        }
    }
    
    return -1;
}

