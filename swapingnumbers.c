// swaping numbers using call by refrence
// #include<stdio.h>
// void swap(int*x,int*y){
//     int temp;
//     temp=*x;/*save value at address*/
//     *x=*y;/*put y into x*/
//     *y=temp;/*out temp into y*/
//     return;
// }
// int main()
// {
//     int a=34, b=74;
//     printf("%d and %d \n", a,b);
//     swap(&a,&b);
//     printf("%d and %d \n", a,b);
//     return 0;
// }
// swaping no. using call by value*/
#include <stdio.h>
 
 void swap(int, int);
 
int main()
{
   int x, y;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(x, y); 
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}
 
void swap(int a, int b)
{
   int temp;
 
   temp = b;
   b = a;
   a = temp;
    printf("Values of a and b is %d  %d\n",a,b);
}