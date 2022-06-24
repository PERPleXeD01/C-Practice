//Write the program to display the position, size and type of images formed by a concave mirror.
#include<stdio.h>
int main(){
    int p;
    printf("Press 1, if the object is at Infinity:\n");
    printf("Press 2, if the object is Beyond the center of curvature C:\n");
    printf("Press 3, if the object is at the center of curvature C:\n");
    printf("Press 4, if the object is Between C and F:\n");
    printf("Press 5, if the object is at focus F:\n");
    scanf("%d", &p);
    if(p==1){
        printf("the object is at Infinity");
    }
    else if(p==2){
        printf("the object is Beyond the center of curvature C");
    }
    else if(p==3){
        printf("the object is at the center of curvature C");
    }
    else if(p==4){
        printf("the object is Between C and F");
    }
    else if(p==5){
        printf("if the object is at focus F");
    }
    else{
        printf("Invalid Entry");
    }
    return 0;
}