#include<stdio.h>

void main()
{
    int n1, n2;

    printf("Enter array A's size: ");
    scanf("%d", &n1);

    int a[n1];

    printf("Enter array A's elements:\n");
    for(int i = 0; i < n1; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter array B's size: ");
    scanf("%d", &n2);

    int b[n2];

    printf("Enter array B's elements:\n");
    for(int i = 0; i < n2; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    int c[n1 + n2];

    // A into C
    for(int i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    // B into C
    for(int i = 0; i < n2; i++)
    {
        c[n1 + i] = b[i];
    }

    printf("Array C is: ");
    for(int i = 0; i < n1 + n2; i++)
    {
        printf("%d", c[i]);
        if(i != n1 + n2 - 1)
        {
            printf(", ");
        }
    }
}

