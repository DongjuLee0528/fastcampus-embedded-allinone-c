//
// Created by Dongju Lee on 2026. 2. 12..
//
#include <stdio.h>
#include <stdlib.h>
// 비트 필드 사용할때 주의 할 부분은 값의 범위
struct {
    unsigned int age : 3; //3비트만 사용하겠음
    //3비트는 0 ~ 7까지 표현 가능
}Age;
int main(void) {
    Age.age = 4;// 4라는 값 사용가능
    printf("sizeof(Age)=%d\n", sizeof(Age));
    printf("Age.age=%d\n", Age.age);

    Age.age = 7; // 7도 사용가능
    printf("Age.age=%d\n", Age.age);

    Age.age = 8; // 8은 4비트 필요하여 0이 나오는 오버플로우 나옴
    // 내가 저장하는 값을 계산해 비트를 할당을 해줌
    printf("Age.age=%d\n", Age.age);

    return 0;
}