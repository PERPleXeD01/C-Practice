//Write a function that prints Namaste if user is Indian & Bonjour if the user is French.
#include <stdio.h>
//prototype
void printnamaste();
void printbonjour();
int main(){
    //function call
    printf("Enter i if Indian or enter f if French: ");
    char ch;
    scanf("%c",&ch);
    if(ch == 'i'){
        printnamaste();
    }
    else{
        printbonjour();
    }
    
    return 0;
}
void printnamaste(){
    //function definition
    printf("Namaste");
}
void printbonjour(){
    //function definition
    printf("Bonjour");
}