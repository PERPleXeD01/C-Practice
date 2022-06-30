#include<stdio.h>
int main(){
    int n, i, f;
    printf("Enter the Number: ");
    scanf("%d", &n);
    f=1;
    for(i=1; i<=n; i++){
        f = f * i;
    }
    printf("Factorial of %d is: %d", n, f );
    return 0;
}