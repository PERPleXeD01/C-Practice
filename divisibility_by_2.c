//Write a program to check if the number is divisible by 2 or not.//
#include <stdio.h>
int main(){
    /* 1 ---> True
       0 ---> False */
    int x, d;
    printf("Enter the number you want to check: ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    return 0;
}