//Write a program to check if a given number is Armstrong number or not.
#include <stdio.h>
int main(){
    int num,x,temp,sum=0;
    printf("Enter the Number:");
    scanf("%d", &num);
    temp=num;
    while(num>0){
        x=num%10;
        sum=sum+(x*x*x);
        num=num/10;
    }
    if(temp==sum){
        printf("%d is a Armstrong Number.", temp);
    }
    else{
        printf("%d is not a Armstrong Number.", temp);
    }
    return 0;
};