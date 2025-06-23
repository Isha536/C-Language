#include<stdio.h>

void main()
{
    int N, fact = 1;

    printf("Enter N: ");
    scanf("%d", &N);

    while(N > 0)
    {
        fact = fact * N;
        N--;
    }

    printf("Factorial is %d", fact);
}

