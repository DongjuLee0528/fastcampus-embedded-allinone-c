//
// Created by Dongju Lee on 2026. 2. 10..
//
// Union 구조체와는 달리 동일한 메모리 위치에 다른 데이터 유형을 저장 할 수 있다.\

// 공용체 선언

union [union tag] {
    member definition;
    member definition;
}[union name];

// ex)
union Data {
    int i;
    float f;
    char str[20];
    //원래 28바이트 사이즈지만 union 개념 덕분에 20바이트이다
}data;
