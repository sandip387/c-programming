#include<stdio.h>
main()
{
    float marks1, marks2, marks3, marks4, marks5;
    float total, percentage;
    printf("enters the marks of five subjects:");
    scanf("%f,%f,%f,%f,%f", &marks1, &marks2, &marks3, &marks4, &marks5);
    total = marks1+marks2+marks3+marks4+marks5;
    percentage = (total/5);
    printf("%f", percentage);
}