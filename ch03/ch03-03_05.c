//
// Created by Dongju Lee on 2026. 2. 2..
//
#include <stdio.h>
int main(void) {
    //break문과 달리 continue는 이 조건 하나만 건너 뛰고 조건 검사를 계속 진행한다
    int a = 10;

    do {
        if (a == 15) { //a가 15가 되는순간 a를 16으로 만든 후 continue이 다시 조건 검사를 할 수 있게 해준다
            a = a + 1;
            continue;
        }
        printf("value is a %d\n", a);
        a++;
    }while (a < 20);


    return 0;
}