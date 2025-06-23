#include<stdio.h>

void main()
{
    int i = 1, N, sum = 0;

    printf("Enter N: ");
    scanf("%d", &N);

    while(i <= N)
    {
        sum = sum + i;
        i++;
    }

    printf("Sum is %d", sum);
}

