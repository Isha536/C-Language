#include<stdio.h>

int Facto(int x)
{
    if(x == 1 || x == 0)
    {
        return 1;
    }

    return x * Facto(x - 1);
}

void main()
{
    int n, result;

    printf("Enter value of n: ");
    scanf("%d", &n);

    result = Facto(n);

    printf("Factorial = %d", result);
}

