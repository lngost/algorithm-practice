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

int main() {
    int a[ARRAY_SIZE] = {5,7,3,4,10,9,6,8,1,2};
    
    printf("input: ");
    display(a,ARRAY_SIZE);
    
    insertionSort(a,ARRAY_SIZE,ORDER_ND);
    printf("non-descending: ");
    display(a,ARRAY_SIZE);
    
    insertionSort(a,ARRAY_SIZE,ORDER_NA);
    printf("non-ascending: ");
    display(a,ARRAY_SIZE);
        
    return 0;
}

