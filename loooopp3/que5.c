#include<stdio.h>

void main()
{
    int i, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        if(i % 2 != 0)
            printf("%d\n", i);
    }
}

