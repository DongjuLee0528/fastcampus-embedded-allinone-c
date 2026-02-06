//
// Created by Dongju Lee on 2026. 2. 6..
//포인터 예제 함수 파라미터 포인터 예제
#include <stdio.h>
double getAverage (int *arr, int size) {
    int i, sum = 0;
    double avg;

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    avg = (double)sum / size;
    return avg;
}

int main () {
    int arr [5] ={1000, 2, 3, 17 , 50};
    double avg;
    avg = getAverage(arr, 5);
    printf("avg value is = %f\n", avg);
    return 0;
}