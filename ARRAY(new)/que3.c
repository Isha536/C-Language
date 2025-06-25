#include<stdio.h>

void main()
{
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n], b[n], c[n];

    printf("Enter array A's elements:\n");
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter array B's elements:\n");
    for(int i = 0; i < n; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    printf("Array C is: ");
    for(int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d", c[i]);

        if(i != n - 1)
        {
            printf(", ");
        }
    }
}

