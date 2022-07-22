#include<stdio.h>
main()
{
    int a[5],flag=0,key, i;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter an element to search");
    scanf("%d",&key);
    for(i=0;i<5;i++)
    {
        if(key!= a[i])
        {
            flag=0;
        }
        else{
            flag=1;
            break;
        }
        if(flag==1){
            printf("Element found");
        }
        else{
            printf("NOT FOUND");
        }
    }
}