//Write a function to calculate sum of two numbers
#include<stdio.h>
int sum (int a, int b);
int main(){
    int a, b;
    printf("enter the first number: ");
    scanf("%d", &a);
    printf("enter the first number: ");
    scanf("%d", &b);

    int s = sum(a,b);
    printf("Sum is: %d ", s);
    return 0;
}
int sum (int x, int y){
    return x + y;
}