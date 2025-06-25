#include<stdio.h>

void main()
{
    int n, sum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum of the Array: %d", sum);
}

