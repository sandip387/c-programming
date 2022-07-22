#include<stdio.h>
int main()
{
     int m1, m2, m3, m4, m5, tot;
     float per;
     printf("Enter Marks of Five Subjects:\n");
     scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
     tot = m1+m2+m3+m4+m5;
     printf("\nTotal Marks of Student = %d\n",tot);
     /*condition for checking student is pass or not.*/
     if(m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5>=40)
     {
          printf("\nStudent is PASS\n");
          per= tot/5.0;
          printf("\nPercentage of a Student = %.2f",per);
     }
     else
          printf("\nStudent is FAIL");
     return 0;
}