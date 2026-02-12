//
// Created by Dongju Lee on 2026. 2. 12..
//
#include <stdio.h>
#include <stdlib.h>
struct {
    unsigned int a;
    unsigned int b;
}status1;
struct {
    unsigned int a : 1;
    unsigned int b : 1;
}status2;

int main(void) {
    printf("status1 memory is = %d\n", sizeof(status1));
    printf("status2 memory is = %d\n", sizeof(status2));
    return 0;
}