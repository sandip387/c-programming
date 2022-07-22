#include<stdio.h>
#include<string.h>
#include<conio.h>
#define NUM 2
void main()
{
    struct dob{
int dd;
int mm;
int yy;
};
struct student{
    int roll_no;
    char name[20];
    char faculty[10];
    struct dob date_of_birth;
};
struct student s[NUM];
int i;
for(i=0;i<NUM;i++){
    printf("enter data of student %d\n",i+1);
    printf("enter roll no");
    scanf("%d",&s[i].roll_no);
    printf("enter name");
    scanf("%s", s[i].name);
    printf("enter faculty");
    scanf("%s", s[i].faculty);
    printf("enter day");
    scanf("%d",&s[i].date_of_birth.dd);
    printf("enter month");
    scanf("%d",&s[i].date_of_birth.mm);
    printf("enter year");
    scanf("%d",&s[i].date_of_birth.yy);
    }
    printf("\n Second record");
    for(i=0;i<NUM;i++)
    {
        if (strcmp(s[i].faculty,"CSIT || csit")==0)
        {
        printf("roll no%d\n",s[i].roll_no);
        printf("faculty=%s \n", s[i].faculty);
        printf("day=%d\n", s[i].date_of_birth.dd);
        printf("month=%d\n",s[i].date_of_birth.mm);
        printf("year=%d\n",s[i].date_of_birth.yy);
        }
    }
    getch();

}