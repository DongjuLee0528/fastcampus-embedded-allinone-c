//
// Created by Dongju Lee on 2026. 2. 3..
//
#include <stdio.h>
int main (void) {

    /**
     * 2차원 배열 선언
     * type arrayName[x][y];
     * ex) int a [3][4]
     * 배열 초기화
     * ex int a[3][4] ={{0, 1, 2, 3}, {4, 5, 6, 7},{8, 9, 10, 11}}
     * ex int a[][4] ={{0, 1, 2, 3}, {4, 5, 6, 7},{8, 9, 10, 11}}
     */

    int a [3][2] = { {1, 2}, {3, 4}, {5, 6} };
    int i,j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf ("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }

    return 0;
}