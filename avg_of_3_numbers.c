//Write a program to print the average of 3 numbers.//
#include<stdio.h>
int main(){
    float x, y, z, avg;         //Using float to not bound the user to input only integer//
    printf("Enter the 1st number: ");
    scanf("%f", &x);
    printf("Enter the 2nd number: ");
    scanf("%f", &y);
    printf("Enter the 3rd number: ");
    scanf("%f", &z);
    avg = (x+y+z)/3;
    printf("Average is %f", avg);
    return 0;
}