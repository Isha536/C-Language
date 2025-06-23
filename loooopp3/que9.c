#include<stdio.h>

void main()
{
    int i, N, fact = 1;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        fact = fact * i;
    }

    printf("Factorial is %d", fact);
}

