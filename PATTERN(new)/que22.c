#include<stdio.h>

void main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = i; j <= 2 * i - 1; j++)
        {
            printf("%d", (i + j) % 2);
        }
        printf("\n");
    }
}

