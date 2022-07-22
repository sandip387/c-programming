#include <stdio.h>

void changeVal(int *a){
    printf("Value in function block is %d\n", ++*a);
}
int main(int argc, char const *argv[])
{
    int a = 4;
    changeVal(&a);
    printf("Value of a in main program is %d\n", a);
    return 0;
}
