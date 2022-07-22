#include<stdio.h>
#define pi 3.14
int main()
{
int r;
float a, c;
printf ("enter the radius of circle");
scanf("%d",&r);
a= (pi*r*r);
c = 2*pi*r;
printf("%f",a);
printf("%f", c);
return 0;
}