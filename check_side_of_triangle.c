//Given three inputs (a, b, c), display 1 if those are sides of a triangl else display 0 on the screen//
#include<stdio.h>
int main(){
    float a, b , c, t;
    printf("Enter the length of side:");
    scanf("%f", &a);
    printf("Enter the length of side:");
    scanf("%f", &b);
    printf("Enter the length of side:");
    scanf("%f", &c);
    t = (a + b) > c && (b + c) > a && (a + c) > b;
    printf("A, B, C are sides of triangle?\nPrint 1 if true, 0 if false:\n %f", t);
    return 0;
    }