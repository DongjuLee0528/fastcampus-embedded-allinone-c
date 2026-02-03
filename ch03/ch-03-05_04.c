//
// Created by Dongju Lee on 2026. 2. 3..
//
#include <stdio.h>
// 함수 인자에 배열 전달하기
double getAverage(int arr[],int size) {
    int i;
    double avg;
    double sum = 0;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    avg = sum / size;
    return avg;
}
int main (void) {

    int balance[5] ={100, 2, 3, 17, 50};
    double avg;

    avg = getAverage(balance, 5); // 함수 호출때 balance 넘겨줌
    printf ("avg if = %f\n", avg);

    return 0;
}