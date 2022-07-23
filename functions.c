// Write two programs one to print "hello" and second to print "good bye"
#include <stdio.h>
//prototype
void printhello();
void printbye();
int main(){
    //function call
    printhello();
    printbye();
}
void printhello(){
    //function definition
    printf("Hello!\n\n");
}
void printbye(){
    //function definition
    printf("Good Bye!");
}