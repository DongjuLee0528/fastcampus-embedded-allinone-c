//
// Created by Dongju Lee on 2026. 2. 4..
//
#include <stdio.h>
void swap(int x, int y);
void swap(int x, int y) {
    int temp;

    temp = x;

    x = y;
    y = temp;

    return;
}

int main(void) {

    int a = 100;// 함수에 전달 되는 값은 이 int a의 값을 복사해서 준다 그러므로 a b의 값은 변경이 안된다 변경하고 싶으면 메모리 주소를 줘야한다
    int b = 200;

    printf("Before swap(), a = %d\n", a);
    printf("Before swap(), b = %d\n", b);

    swap(a, b);

    printf("After swap(), a = %d \n", a);
    printf("After swap(), b = %d \n", b);
}