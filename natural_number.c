//Write a program to check if the given number is a natural number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number:");
    scanf("%d", &n);
    if(n>=1){
        printf("%d is a Natural Number.", n);
    }
    else{
        printf("%d is not a Natural Number.", n);
    }
    return 0;
}