//
// Created by Dongju Lee on 2026. 2. 10..
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main (void) {
    union Data data;
    data.i = 10;
    data.i = 220.5;
    strcpy(data.str, "Dong ju LEE");

    printf("data.i = %d\n", data.i);
    printf("data.f = %f\n", data.f);
    printf("data.f = %s\n", data.str);

    return 0;
}