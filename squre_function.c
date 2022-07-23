//use library function to calculate square of a number
#include <stdio.h>
#include <math.h>

void calculatesquare (float value);
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("%f", pow(n,2));
}