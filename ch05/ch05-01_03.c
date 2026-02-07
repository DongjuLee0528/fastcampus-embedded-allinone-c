//
// Created by Dongju Lee on 2026. 2. 7..
//
#include <stdio.h>
#include <string.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
void printBook(struct Books book);

int main(void) {
    struct Books book1;

    strcpy(book1.title, "C programming Tutorial");
    strcpy(book1.author, "GROUND EMBEDDED");
    strcpy(book1.subject, "C programming Tutorial");
    book1.book_id = 12345;

    printBook(book1);
    return 0;
}

void printBook(struct  Books book) {
    printf("book1 title = %s\n", book.title);
    printf("book1 author = %s\n", book.author);
    printf("book1 subject = %s\n", book.subject);
    printf("book1 book_id = %d\n", book.book_id);
}