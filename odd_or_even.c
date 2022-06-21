//Write a program to check if the number is odd or even//
#include <stdio.h>
int main(){
    /*Output will be 1 ---> Even
                     0 ---> Odd */
    int x, d;
    printf("Enter the number you want to check: ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    return 0;
}