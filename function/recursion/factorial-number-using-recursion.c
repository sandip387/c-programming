#include<stdio.h>
int factorial(int n);
main(){
    int num=5;
    int myfact=factorial(num);
    printf("%d", myfact);
}
int factorial(int n){
    int fact;
    if(n==1&&n==0)
    return(1);
    else
    fact=n*factorial(n-1);
    return(fact);
}