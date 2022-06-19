#include<stdio.h>
int main(){
/*Write a program to calculate perimeter of rectangle.
  Take sides, a & b, from the user.*/
    float l, b , p;
    printf("Enter length of rectangle: ");
    scanf("%f", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &b);
    p = l + b + l + b;
    printf("Perimeter of rectangle = %f", p);
    return 0;
}