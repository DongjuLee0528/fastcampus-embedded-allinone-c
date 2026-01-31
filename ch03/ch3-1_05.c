//
// Created by Dongju Lee on 2026. 1. 31..
//
#include <stdio.h>
int main(void) {

    int a = 21;
    int c;

    c = a;
    printf("c = %d\n", c);

    c += a; // c = c+a
    printf("c = %d\n", c);

    c -= a; // c = c-a
    printf("c = %d\n", c);

    c <<= 2; // << 비트 연산자에서도 설명한거처럼 *4
    printf("c = %d\n", c);

    c >>= 2; // >>는 비트 연산자에서도 설명한거 처럼 /4
    printf("c = %d\n", c);
}