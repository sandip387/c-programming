#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char another='Y';
    struct employee{
        char name[40];
        int age;
        float salary;
        };
        struct employee emp;
        {
            fp=fopen("employee.dat", "wb");
            if(fp==NULL)
            {
                puts("cannot open");
                exit(1);
            }
            while (another='Y')
            {
            printf("\nEnter name, age and salary\n");
                scanf("%s%d%f", emp.name,&emp.age,&emp.salary);
                fwrite(&emp, sizeof(emp), 1,fp);
                printf("\n Add another record(Y/N)");
                fflush(stdin);
                another=getchar();
                }
                fclose(fp);
                return 0;
                 };
        
}