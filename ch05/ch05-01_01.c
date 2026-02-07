//
// Created by Dongju Lee on 2026. 2. 7..
//
// 구조체 선언
struct  [structure tag ] { //struct 키워드 사용 후 뒤에 만들 자료형 structure tag 을 만들고
    member definition; // 중괄호 안에 넣고 싶은 변수를 데이터 타입을 매칭에 member라고 부른다
    member definition;
}[struct name]; // 구조체 이름 정하기
ex) struct Books {
    char title[50]; // 제목 배열
    char author[50];// 저자
    char subject[100];// 주제
    int book_id;
    //book이라는 데이터 타입과 변수를 설정 가능
};
