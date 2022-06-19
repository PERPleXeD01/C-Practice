#include<stdio.h>
int main(){
    //Calculating slope of line//
    float x1, x2, y1, y2, m;
    printf("Enter the coordinate x1: ");
    scanf("%f", &x1);
    printf("Enter the coordinate x2: ");
    scanf("%f", &x2);
    printf("Enter the coordinate y1: ");
    scanf("%f", &y1);
    printf("Enter the coordinate y2: ");
    scanf("%f", &y2);
    m= (y2-y1)/(x2-x1);
    printf("Slope of the line is: %f", m);
    return 0;
}