//
// Created by Dongju Lee on 2026. 2. 10..
//
// 올바른 사용법
#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};
int main (void) {
    union Data data;
    // 값을 할당한 멤버는 다른 멤버에 할당하기전에 사용해버린다
    data.i = 10;
    printf("data.i = %d\n", data.i);


    data.f = 220.5;
    printf("data.f = %f\n", data.f);

    strcpy(data.str, "Dong ju LEE");
    printf("data.str = %s\n", data.str);

    return 0;

}