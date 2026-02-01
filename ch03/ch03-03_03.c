//
// Created by Dongju Lee on 2026. 2. 2..
//
#include <stdio.h>
int main (void) {
    //do~while문은 for while문과는 다르게 한번은 실행 후 조건을 확인한다 for while은 조건을 먼저 확인 후 실행을 하지만 do~while 다르다

    int a = 10;

    do {
        printf("a = %d\n", a);
        a = a + 1;
    }while (a < 20);

    return 0;
}