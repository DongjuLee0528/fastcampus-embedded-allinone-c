//
// Created by Dongju Lee on 2026. 2. 6..
//
#include <stdio.h>
int main () {

    int a = 20;
    int *p;
    p = &a; //변수 a 의 메모리 주소 저장

    printf("a address is = %x\n", &a); // a의 메모리 주소
    printf("p address is = %x\n", p); //p에 저장된 메모리 주소
    printf("*p address is = %d\n", *p);// p가 가리키는 메모리의 값 출력

    return 0;
}