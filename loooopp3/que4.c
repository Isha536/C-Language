#include<stdio.h>

void main()
{
    int i, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i = N; i >= 1; i--)
    {
        printf("%d\n", i);
    }
}

