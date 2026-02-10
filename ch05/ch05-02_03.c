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
    // 메모리 공유라는 특징때문에 공용체의 중요한 규칙은 한번에 하나의 멤버만 사용가능하다
    printf("data.i = %d\n", data.i); //쓰레기 값이 나옴
    printf("data.f = %f\n", data.f); // 쓰레기 값이 나옴
    printf("data.str = %s\n", data.str);

    return 0;
}