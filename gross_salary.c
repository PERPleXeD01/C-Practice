//If basic salary is < Rs. 1500, then HRA = 10% and DA = 40% of basic salary else HRA Rs.500 and DA = 50% of basic salary. Find his gross salary.
#include<stdio.h>
int main(){
    int basic_salary, HRA, DA, gross_salary;
    printf("Enter Basic Salary: ");
    scanf("%d", &basic_salary);
    if(basic_salary<1500){
        HRA= basic_salary*0.1;
        DA= basic_salary*0.4;
        gross_salary= basic_salary-HRA-DA;
        printf("Gross Salary= %d", gross_salary);
    }
    else{
        HRA=500;
        DA=basic_salary*0.5;
        gross_salary= basic_salary-HRA-DA;
        printf("Gross Salary= %d", gross_salary);
    }
    return 0;
}