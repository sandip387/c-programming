#include<stdio.h>
#define N1 2
#define N2 3
int main()
{
    int a[N1][N2],i,j;
    printf("enter elements of Matrix: \n");
    for(i=0;i<N1;i++)
    {
        for(j=0;j<N2;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }   
        printf("Matrix is: \n");
        for(i=0;i<N1;i++)
        {
            for(j=0;j<N2;j++)
            {
                printf("%d \t",a[i][j]);
            }
            printf("\n");
        }
        printf("\n Transpose of matrix: \n");
        for(i=0;i<N2;i++)
        {
            for(j=0;j<N1;j++)
            {
                printf("%d \t", a[j][i]);
            }
         printf("\n"); 
        }
      
    
}