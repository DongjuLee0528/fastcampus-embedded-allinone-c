//
// Created by Dongju Lee on 2026. 2. 6..
//함수 return 포인터 예제
#include <stdio.h>
int* getArr(void) {
    static int arr[3]; //static 없다면 arr배열은 getArr 함수가 끝나면 메모리가 없어짐 static은 프로그램이 끝날때까지 살아 있게 해줌
    // 즉 함수가 지역변수의 주소를 반완 할때는 static 반드시 사용해야한다
    int i;
    for (i = 0; i < 3; i++) {
        arr[i] = i;
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return arr;
}

int main(void) {
    int *p;
    int i;

    p = getArr(); //getArr에 static 없다면 p는 쓰레기 값
    for (i = 0; i < 3; i++) {
        printf("*(p + [%d]) = %d\n", i, *(p+i));
    }
    return 0;
}