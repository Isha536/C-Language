#include<stdio.h>

void main()
{
    int N, i = 1;

    printf("Enter N: ");
    scanf("%d", &N);

    while(i <= 10)
    {
        printf("%d x %d = %d\n", N, i, N*i);
        i++;
    }
}

