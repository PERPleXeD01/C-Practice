//Write a program to print the largest among three numbers (a, b, c).
#include<stdio.h>
int main(){
    int a, b, c, m;
    printf("Enter three numbers:");
    scanf("%d" "%d" "%d", &a,  &b,  &c);
    m=a;
    if ((b>m))
    {
        m=b;
    }
    if(c>m){
        m=c;
    }
    printf("%d is Maximum Number", m);
    return 0;   
}