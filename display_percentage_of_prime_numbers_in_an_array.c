#include<stdio.h>
void main()
{
    int arr[10],count, j, i;
    float percent, npercent;
    printf("print 10 elements of an array:");
    for(i=0;i<10,i++)
    {
    printf("elements - %d;",i);
    scanf("%d",&arr[i]);
    }
    printf ("elements in array are:");
    for(i=0;i<10;i++)
    {
        printf ("%d", arr[i]);
    }
    printf("The prime numbers that exist in the array are:");
    }
    for(j=0;j<10,j++)
    {
        int count = 0;
        for (i=2; i<arr[j]/2;i++)
    {
        if(arr[j]%i ==0)
    {
        count++;
    }
    }
    if(count== 0)
    {
        printf("%d", arr[j]);
    }
    printf(" the percentage of prime number if ");
    percent= (count/10)*100
    scanf("%d",percent);
    printf("The percentage of non prime numbers is");
    npercent= 100-percent ;
        scanf("%d", npercent);
    }