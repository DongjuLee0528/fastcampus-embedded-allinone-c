//
// Created by Dongju Lee on 2026. 2. 1..
//
//switch 코드는 최적화 할때 많이 사용해 중요한 포인트
#include <stdio.h>
int main(void) {
    char grade = 'B';
    switch (grade) { //if문과는 다르게 ()에 조건을 넣는 것이 아닌 변수를 넣는다
        case'A':
            printf("Exellent!\n");
            break; // 해당하는 케이스가 맞으면 switch을 나가라 break;가 어디에서 걸리는지 잘 확인하기
        case'B':
        case'C':
            printf("Well Done! \n");
            break;
        default:
            printf("Invalid Grade!\n");


    }
    printf(("Your grade is %c\n"), grade);

    return 0;
}