//
// Created by Dongju Lee on 2026. 2. 12..
//
#include <stdio.h>
#include <stdlib.h>

struct {
    unsigned int age : 3;
}Age;
int main(void) {
    Age.age = 4;
    printf("sizeof(Age)=%d\n", sizeof(Age));
    printf("Age.age=%d\n", Age.age);

    Age.age = 7;
    printf("Age.age=%d\n", Age.age);

    Age.age = 8;
    printf("Age.age=%d\n", Age.age);

    return 0;
}