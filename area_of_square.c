#include<stdio.h>
int main(){
    //area of a square//
    float side, area;
    printf("enter the side of the square: ");
    scanf("%f", &side);
    area = side * side;
    printf("%f", area);
    return 0;
}