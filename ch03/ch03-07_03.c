//
// Created by Dongju Lee on 2026. 2. 6..
//
#include <stdio.h>

int main(void) {
    double balance[5] ={1000.2, 2.0, 3.4, 17.0, 50.0}; //double 배열 선언
    double *p;

    int i;
    p = balance; //배열의 이름을 포인터에 할당

    for (i = 0; i < 5; i++) {
        printf("*(P + %d) = %f\n",i, *(p+i)); //포인터 쓰고 p + 는 p의 시작 주소로 부터 i 개의 요소만큼 뒤로 이동한 주소 값
        //p[i] == *(pti) 같다고 볼 수 있다
        // 배열 == 포인터
        //*(p+i) 이 식을 보면 배열이랑 포인터랑 동일한 개념으로 쓰이고 똑같이 처리될 수도있다
    }

    for (i = 0; i < 5; i++) {
        printf("*(balance + %d) = %f\n",i, *(balance+i));
        // *(balance+i)이 식을 보면 배열이랑 포인터랑 동일한 개념으로 쓰이고 똑같이 처리될 수도있다
    }
    return 0;
}