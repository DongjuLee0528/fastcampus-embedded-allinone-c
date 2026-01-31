//
// Created by Dongju Lee on 2026. 1. 31..
//
#include <stdio.h>
int main(void) {
    int a = 5;
    int b = 20;

    printf("a && b = %d\n", a && b);
    printf("a || b = %d\n", a || b);

    a = 0;
    b =10;

    printf("a && b = %d\n", a && b);
    printf("a || b = %d\n", a || b);

}