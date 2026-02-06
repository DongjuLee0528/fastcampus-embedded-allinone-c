//
// Created by Dongju Lee on 2026. 2. 6..
//
#include <stdio.h>

const int max =3;

int main (void) {
    int arr[] = {10, 200, 300}; // 배열에 이름은 그 자체로 배열의 시작 주소
    int i, *p;

    p = arr; // arr은 배열에 시작주소

    for (i = 0; i < max; i++) {
        printf("address of arr[%d] = %x\n", i, p); // 배열 메모리 주소 출력
        printf("value of arr[%d] = %d\n", i, *p); // 배열 값 출력
        p++; // 포인터 연산 주소 값을 1만 올리는게 아닌 p가 가리키는 자료형 사이즈 만큼 증가 함
    }
    return 0;
}