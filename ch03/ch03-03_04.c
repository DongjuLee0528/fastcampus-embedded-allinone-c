//
// Created by Dongju Lee on 2026. 2. 2..
//
#include <stdio.h>
int main (void) {

    int a = 10;

    while (a < 20) {
        printf("a is %d\n", a);
        a++;

        if (a > 15) {
            break;
        }
    }

    return 0;
}