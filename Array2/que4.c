#include<stdio.h>

void main()
{
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n], max;

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    max = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    printf("Maximum element: %d", max);
}

