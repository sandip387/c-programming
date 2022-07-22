#include<stdio.h>
void printline(void);
main()
{
    printline();
    printf("This illustrates the use of C functions\n");
    printline();
}
void printline(void)
{
    int i;
    for(i=1;i<40;i++)
    printf("-");
    printf("\n");
}