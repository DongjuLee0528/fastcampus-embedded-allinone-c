//
// Created by Dongju Lee on 2026. 1. 30..
//
#include <stdio.h>
int main() {

    char c = 125;
    c = c +10;

    printf("%d\n", c);//오버플로우 발생
    return 0;
}