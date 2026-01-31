//
// Created by Dongju Lee on 2026. 1. 31..
//
#include <stdio.h>
int main(void) {

    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    printf("c = %d\n", c);
    c = a - b;
    printf("c = %d\n", c);
    c = a * b;
    printf("c = %d\n", c);
    c = a / b;
    printf("c = %d\n", c);
    c = a % b;
    printf("c = %d\n", c);
    c = a++;
    printf("c = %d\n", c);
    c = a--;
    printf("c = %d\n", c);
}