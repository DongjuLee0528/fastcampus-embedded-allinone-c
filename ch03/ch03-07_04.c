//
// Created by Dongju Lee on 2026. 2. 6..
//
#include <stdio.h>
int *getArr(void) {
    static int arr[3];

    int i;
    for (i = 0; i < 3; i++) {
        arr[i] = i;
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return arr;
}

int main(void) {
    int *p;
    int i;

    p = getArr();
    for (i = 0; i < 3; i++) {
        printf("*(p + [%d]) = %d\n", i, *(p+i));
    }
    return 0;
}