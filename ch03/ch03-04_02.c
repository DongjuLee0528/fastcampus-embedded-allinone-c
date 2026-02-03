//
// Created by Dongju Lee on 2026. 2. 3..
//
#include <stdio.h>
int a = 20; // 글로벌 변수
int sum (int a, int b);// 함수 원형 선언 메인보다 밑에 있는 sum함수를 컴파일러가 미리 알 수 있게 예고한다
// 함수를 메인 위에 선언을 하거나 메인 밑에 적었을 경우에는 함수 원형 선언을 해주어야 한다 이유는 c언어는 순차언어라 그렇다

int main (void) {
    int a = 10;// 로컬변수
    int b = 20;
    int c = 0;

    printf ("a in mian is = %d\n",a);
    c= sum (a, b); //sum함수 호출 a b 각 각의 값을 sam 함수에 복사되어 전달 된다 즉 원본을 주는것이 아닌 복사본을 준다 pass by value라 한다
    printf ("c in mian is = %d\n",c);

    return 0;
}
int sum(int a, int b) {
    printf("a in sum() is  = %d\n",a); // a =10
    printf("b in sum() is  = %d\n",b); // b = 20
    // 리턴 값이 없으면 쓰레기값이 나옴
    return a+b;
}