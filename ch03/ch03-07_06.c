//
// Created by Dongju Lee on 2026. 2. 6..
//포인터 to 포인터
#include <stdio.h>
int main (void) {
    int a;
    int *p;
    int **pp;

    a = 3000;

    p =&a;

    pp = &p;

    printf(" a is  = %d\n",a);
    printf(" *p is  = %d\n",*p);
    printf(" **p is  = %d\n", **pp);
}