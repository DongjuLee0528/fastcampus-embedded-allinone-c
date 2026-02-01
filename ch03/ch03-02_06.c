//
// Created by Dongju Lee on 2026. 2. 1..
//
#include <stdio.h>
int main(void) {
    int a = 100;
    int b = 200;

    switch (a) { // switch문도 중첩 가능
        case 100:
            printf("Outer Switch Case\n");
            switch (b) {
                case 200:
                    printf("Inner Switch Case\n");
            }
    }
    printf("value a is %d\n", a);
    printf("value b is %d\n", b);
}