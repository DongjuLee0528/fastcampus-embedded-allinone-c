//
// Created by Dongju Lee on 2026. 2. 6..
//
#include <stdio.h>

int main(void) {
    double balance[5] ={1000.2, 2.0, 3.4, 17.0, 50.0};
    double *p;

    int i;
    p = balance;

    for (i = 0; i < 5; i++) {
        printf("*(P + %d) = %f\n",i, *(p+i));
    }

    for (i = 0; i < 5; i++) {
        printf("*(balance + %d) = %f\n",i, *(balance+i));
    }
    return 0;
}