/*
 *  Author: lngost
 *  See https://github.com/lngost/algorithm-practice
 */

#include "main.h"

void display(int a[], size_t nitems) {
    for(int i=0; i<nitems; i++) {
        printf("%d", a[i]);
        if(i<nitems-1) printf(", ");
        else printf("\n");
    }
}

bool indexFound(const int resultIndex) {
    if(resultIndex >= 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int a[SIZE] = {101,102,103,104,105,106,107,108,109,110,111,112,113,114,115};
    int key1 = 113;
    int key2 = 99;
    int resultIndex = -1;
    
    printf("input: ");
    display(a, SIZE);
    
    printf("\n");
    printf("key1: %d\n", key1);
    resultIndex = binarySearch(a, 0, SIZE-1, key1);
    if(indexFound(resultIndex)) {
        printf("result index: %d, found!\n", resultIndex);
    } else {
        printf("result index: %d, not found!\n", resultIndex);
    }
    
    printf("\n");
    printf("key2: %d\n", key2);
    resultIndex = binarySearch(a, 0, SIZE-1, key2);
    if(indexFound(resultIndex)) {
        printf("result index: %d, found!\n", resultIndex);
    } else {
        printf("result index: %d, not found!\n", resultIndex);
    }
    
    
    return 0;
}

