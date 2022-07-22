#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5] = {9, 8, 7, 6, 5};
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 -1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("After sorting\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}
w