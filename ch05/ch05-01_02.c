//
// Created by Dongju Lee on 2026. 2. 7..
//
#include <stdio.h>
#include <string.h>

struct Books { //
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main(void) {
    struct Books book1; //struct Books book1; 구조체 변수 생성

    strcpy(book1.title, "C programming"); //book1.title이라고 적으면 books 구조체 안에 있는 title 변수에 접근 가능
    //strcpy는 book1.title 이 변수에 "C programming" 문자열을 복사해주는 함수
    strcpy(book1.author, "GROUND EMBEDDED");
    strcpy(book1.subject, "C programming Tutorial");
    book1.book_id = 12345;

    printf("book1 title = %s\n", book1.title);
    printf("book1 author = %s\n", book1.author);
    printf("book1 subject = %s\n", book1.subject);
    printf("book1 book_id = %d\n", book1.book_id);
}