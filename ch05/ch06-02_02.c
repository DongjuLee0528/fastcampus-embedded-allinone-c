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
    union Data data; //union Data에 data 변수 생성
    printf("Memory size is = %d\n", sizeof(data)); //sizeof 데이터 사이즈 확인 가능 #include <stdlib.h>함수 사용

    return 0;
}