#include<stdio.h>

void main()
{
    int i, N, sum = 0;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        sum = sum + i;
    }

    printf("Sum is %d", sum);
}

