//
// Created by Dongju Lee on 2026. 2. 1..
//
#include <stdio.h>

int main (void) {
    int a = 100;
    if (a == 10) {// if문에서 if 다음으로 if을 적으면 if문이 총 2번 돌지만 if 다음에 else if 을 사용하면 if문을 한번 사용한걸로 친다
        printf("a is 10 \n");
    }
    else if (a == 20) {
        printf("a is 20 \n");
    }
    else {
        printf("none of the value is matching\n");
    }
    printf("value a %d\n", a);

    return 0;
}