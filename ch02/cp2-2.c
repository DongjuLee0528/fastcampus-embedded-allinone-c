#include<stdio.h>

int main() {
    int a = 0;
    char b = 0;
    double c = 0;
    float d = 1.1;
    
    printf("%d %c %f %f", a, b, c, d);

    scanf("%d %c %lf %f", &a, &b, &c, &d);
    
    printf("%d %c %f %f", a, b, c, d);
    return 0;
}