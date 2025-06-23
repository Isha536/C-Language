#include<stdio.h>

void main()
{
    int i = 1, N;

    printf("Enter N: ");
    scanf("%d", &N);

    while(i <= N)
    {
        printf("%d\n", i);
        i++;
    }
}

