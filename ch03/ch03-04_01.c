//
// Created by Dongju Lee on 2026. 2. 3..
//
#include <stdio.h>
// y = a * x + b를 함수로 만들면
int function(int x) {// x는 식에 해당하는 x를 받겠다라는 의미이고 y는 int 출력을 내보낸다라는 뜻 function은 function이름으로 사용하겠다
    // 반환 자료형 함수가 모든 작업을 마치고 반환하는 데이터 타입을 명시한다
    //함수 이름 함수를 호출하기 위한 이름을 명시한다
    //매개변수 함수 호출 시에 전달되는 인수의 값을 저장할 변수들을 선언한다
    // 함수 몸체 함수의 고유 시능을 수행하는 명령문의 집합이다
    /*
    *int function(int x) {
    int a = 10;
    int b = 20;

    return a * x + b;
}
    이걸로 설명을 하면
    반환 자료형은 int
    함수 이름은 function
    매개 변수는 int x
    함수 몸체는
    int a = 10;
    int b = 20;

    return a * x + b;
     */
    int a = 10;
    int b = 20;

    return a * x + b; //return a * x + b;를 출력의 타입을 int로 한다
}
int main (void) {
    // 함수 사용하는 이유는 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 프로그램 코드의 집합이다. 함수를 사용하면 반복적인 프로그래밍을 피할 수 있고 프로그램을 여러개의 함수로 나누어
    //작성하면 모듈화로 인해 전제적인 코드의 가독성이 좋아진다



    return 0;
}