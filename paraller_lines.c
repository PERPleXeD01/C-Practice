//Write a programme to display 1 if two lines in 2-D are parallel to each other else 0.//
#include<stdio.h>
int main(){
    int x1, x2, y1, y2, x3, x4, y3, y4, m1, m2, p;
    printf("Enter the coordinates x1, x2, y1, y2: ");
    scanf("%d" "%d" "%d" "%d", &x1, &x2, &y1, &y2);
    printf("Enter the coordinates x3, x4, y3, y4: ");
    scanf("%d" "%d" "%d" "%d", &x3, &x4, &y3, &y4);
    
    m1= (y2-y1)/(x2-x1);
    m2= (y4-y3)/(x4-x3);
    p = m1 == m2;
    printf("%d",m1);
    printf("%d",m2);
    printf("If lines are parallel print 1 else print 0:\n%d", p);
    return 0;
}