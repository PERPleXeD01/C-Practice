//Given three inputs (a, b, c), display sum of all sides if those are sides of a triangle else displays 0 on the screen//
#include<stdio.h>
int main(){
    float a, b , c, t, s;
    printf("Enter the length of side:");
    scanf("%f", &a);
    printf("Enter the length of side:");
    scanf("%f", &b);
    printf("Enter the length of side:");
    scanf("%f", &c);
    t = (a + b) > c && (b + c) > a && (a + c) > b;
    s = t*(a + b+ c);           //if 't' give false 's' would have become 0, if true multiplying by 1 we will get perimeter
    printf("A, B, C are sides of triangle?\nPrint 0 if false else print perimeter of triangle\n %f", s);
    return 0;
}