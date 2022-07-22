#include<stdio.h>
 main ()
{
    float P, T, R, I;
    printf("Enter principal");
    scanf("%f",&P);
    printf("enter time");
    scanf("%f",&T);
    printf("enter rate of interest");
    scanf("%f", &R);
    I = ( P*T*R)/100;
    printf("%f",I);
}