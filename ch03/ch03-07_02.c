//
// Created by Dongju Lee on 2026. 2. 6..
//
#include <stdio.h>

const int max =3;

int main (void) {
    int arr[] = {10, 200, 300};
    int i, *p;

    p = arr;

    for (i = 0; i < max; i++) {
        printf("address of arr[%d] = %x\n", i, p);
        printf("value of arr[%d] = %d\n", i, *p);
        p++;
    }
    return 0;
}