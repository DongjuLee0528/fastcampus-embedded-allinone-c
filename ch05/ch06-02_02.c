//
// Created by Dongju Lee on 2026. 2. 10..
//
#include <stdio.h>
#include <stdlib.h>

union Data {
    int i;
    float f;
    char str[20];
};
int main (void) {
    union Data data;
    printf("Memory size is = %d\n", sizeof(data));
    return 0;
}