//
// Created by Dongju Lee on 2026. 2. 4..
//
#include <stdio.h>
void swap(int *x, int *y);
void swap(int *x, int *y) {
    int temp;

    temp = *x;

    *x = *y;
    *y = temp;

    return;
}

int main(void) {

    int a = 100;//
    int b = 200;

    printf("Before swap(), a = %d\n", a);
    printf("Before swap(), b = %d\n", b);

    swap(&a, &b);

    printf("After swap(), a = %d \n", a);
    printf("After swap(), b = %d \n", b);
}