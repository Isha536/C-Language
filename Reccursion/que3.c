#include<stdio.h>

int Sum(int x)
{
    if(x == 0)
    {
        return 0;
    }

    return x + Sum(x - 1);
}

void main()
{
    int n, result;

    printf("Enter value of n: ");
    scanf("%d", &n);

    result = Sum(n);

    printf("Sum = %d", result);
}

