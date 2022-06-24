//Write the program to display whether a vehicle moves with constant velocity/acceleration/decceleration.
#include<stdio.h>
int main(){
    int a;
    printf("enter the value of acceleration:");
    scanf("%d", &a);
    if(a=0){
        printf("Car is moving with constant velocity.");
    }
    else if (a>1){
        printf("Car is accelerating.");
    }
    else{
        printf("Car is deccelerating.");
    }
    return 0;
}