#include<stdio.h>

void main()
{
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n], min;

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    min = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Minimum element: %d", min);
}

