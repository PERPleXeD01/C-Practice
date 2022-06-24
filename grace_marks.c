/*WAP to give 60 mark grace if age is below 50 else give 40 marks grace
i.e. all will get atleast 40mark grace additional 20 mark will be given if the age is below 50.*/
#include<stdio.h>
int main(){
    int age, marks;
    printf("Enter marks:", marks);
    scanf("%d", &marks);
    printf("Enter age:", age);
    scanf("%d", &age);
    marks= marks + 40;
    if(age<50){
        marks= marks + 20;
        printf("Total Marks= %d", marks);
    }
    return 0;
}