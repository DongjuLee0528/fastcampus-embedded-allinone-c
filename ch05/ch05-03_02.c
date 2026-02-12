//
// Created by Dongju Lee on 2026. 2. 12..
//
#include <stdio.h>
#include <stdlib.h>
struct {
    unsigned int a;
    unsigned int b;
    // 총 8바이트 사용
}status1;
struct {
    // 같은 타입 변수 안에서 비트를 나눠 쓰는 기능이다
    unsigned int a : 1; //1 bit 만 사용한다라는 것과 같다
    unsigned int b : 1;
    // 총 4 바이트 사용
}status2;

int main(void) {
    printf("status1 memory is = %d\n", sizeof(status1));
    printf("status2 memory is = %d\n", sizeof(status2));
    return 0;
}