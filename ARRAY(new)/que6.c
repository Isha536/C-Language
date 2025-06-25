#include<stdio.h>

void main()
{
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        printf("\nTable of %d:\n", a[i]);
        for(int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", a[i], j, a[i] * j);
        }
    }
}

