#include<stdio.h>

void main()
{
    int i = 1, N;

    printf("Enter N: ");
    scanf("%d", &N);

    while(i <= N)
    {
        if(i % 2 != 0)
            printf("%d\n", i);
        i++;
    }
}

