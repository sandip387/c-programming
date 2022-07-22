#include<stdio.h>
#include<conio.h>
void main(){
    int x=10;
    int *p;
    int **q;
    p=&x;
    printf("value of X = %d",x);
    printf("\n address of X = %u",&x);
    printf("\n value of X = %d",*p);
    printf("\n address of X = %u",p);
    q=&p;
    printf("\n value of X= %d",**q);
    printf("\n address of x =%u",*q);
    printf("\n address of p = %u",q);
    getch();
}