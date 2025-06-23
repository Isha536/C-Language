#include<stdio.h>

void main()
{
    int N;

    printf("Enter N: ");
    scanf("%d", &N);

    while(N >= 1)
    {
        printf("%d\n", N);
        N--;
    }
}

