#include<stdio.h>

void print(int x)
{
    if(x == 0)
    {
        return;
    }

    print(x - 1);
    printf("%d ", x);
}

void main()
{
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    print(n);
}

