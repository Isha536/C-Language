#include<stdio.h>

void main()
{
    int i, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", N, i, N*i);
    }
}

