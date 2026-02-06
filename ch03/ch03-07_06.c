//
// Created by Dongju Lee on 2026. 2. 6..
//포인터 to 포인터
#include <stdio.h>
int main (void) {
    int a;
    int *p;
    int **pp; //이중 포인터 선언

    a = 3000;
    p =&a; //p에는 a의 주소값
    pp = &p; //pp에는 p의 주소값을 넣어 출력을 해보면

    printf(" a is  = %d\n",a);
    printf(" *p is  = %d\n",*p);
    printf(" **p is  = %d\n", **pp);
}