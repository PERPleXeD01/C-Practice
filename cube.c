#include<stdio.h>
int main(){
    //Take a number(n) from user & output its cube(n*n*n).
    float n, cube;
    printf("Give the number you want to calculate cube of: ");
    scanf("%f", &n);
    cube= n*n*n;
    printf("Calculate cube of %f is %f", n, cube);
    return 0;
}