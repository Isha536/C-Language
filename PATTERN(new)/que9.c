#include<stdio.h>

void main()
{
    int i, j, space;

    for(i = 1; i <= 5; i++)
    {
        for(space = 1; space <= 5 - i; space++)
        {
            printf(" ");
        }

        printf("%d\n", i);
    }
}

