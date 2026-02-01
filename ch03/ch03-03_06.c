//
// Created by Dongju Lee on 2026. 2. 2..
//
#include <stdio.h>
int main (void) {
    //goto문은 특정 위치로 강제로 점프 시킴

    int a = 10;

    LOOP:do {
        if (a == 15) {
            a = a + 1;
            goto LOOP; //goto문은 break와continue 다르네 10번으로 이동함
        }
        printf("value is %d\n", a);
        a++;
    }while (a < 20);

    return 0;
}