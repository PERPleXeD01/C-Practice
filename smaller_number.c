//Write a program to print the smallest number of two.//
#include<stdio.h>
int main(){
    float x, y;
    printf("Enter the number: ");
    scanf("%f", &x);
    printf("Enter the number: ");
    scanf("%f", &y);
    if(x<y){
        printf("%f is the smaller number", x);
    }
    else{
        printf("%f is the smaller number", y);
    }
    return 0;
}