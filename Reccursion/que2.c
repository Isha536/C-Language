#include<stdio.h>

void print(int x)
{
    if(x == 0)
    {
        return;
    }

    printf("%d ", x);
    print(x - 1);
}

void main()
{
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    print(n);
}

