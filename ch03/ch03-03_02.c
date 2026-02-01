//
// Created by Dongju Lee on 2026. 2. 2..
//
#include <stdio.h>
int main(void) {
//for문은 정해진 횟수동안 반복 코드가 깔끔

    int a;

    for ( a = 10; a<20; a = a + 1) { //a 변수 초기화 a<20 조건 a = a + 1 증감식
        printf("a is %d\n", a);
    }

    return 0;
}