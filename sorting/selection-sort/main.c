/*
 *  Author: lngost
 *  See https://github.com/lngost/algorithm-practice
 */

#include "main.h"
#define SIZE 10

void display(int a[]) {
    int nitems = SIZE;
    for(int i=0; i<nitems; i++) {
        printf("%d", a[i]);
        if(i < nitems-1) printf(", ");
        else printf("\n");
    }
}

int main() {
    int a[SIZE] = {4,6,7,8,9,2,3,10,1,5};
    int nitems = SIZE;
    
    printf("input: ");
    display(a);
    
    selectionSort(a,nitems,ORDER_ND);
    printf("non-descending order: ");
    display(a);
    
    selectionSort(a,nitems,ORDER_NA);
    printf("non-ascending order: ");
    display(a);
    
    return 0;
}

