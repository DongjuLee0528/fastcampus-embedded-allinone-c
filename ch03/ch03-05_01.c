//
// Created by Dongju Lee on 2026. 2. 3..
//
#include <stdio.h>
int main(void) {
    /**
     * 배열 선언
     * type arrayName[arraySize];
     * ex) double balance[10]// 배열 10개 사용
     * 배열 초기화
     * ex) double balance[5]{1000.0 , 2.0, 3.4,7.0,50.0}; //변수 5개 사용
     * ex) double balance[]{1000.0 , 2.0, 3.4,7.0,50.0}; // 변수를 몇개 사용할 지 안 적어도 들어오는 값을 보고 값을 넣어줌
     *
     * 배열은 1, 2, 4, 5가 아닌 0,1,2,3,4로 사용한다
     */

    int n[10]; // 정수 10개 배열 생성
    int i,j;

    for (i = 0; i < 10; i++) { // 배열의 값을 저장
        n[i] = i + 100;
    }

    for (j = 0; j < 10; j++) { // 해당하는 배열을 읽어 출력
        printf("n[%d] = %d\n", j, n[j]);
    }

    return 0;
}