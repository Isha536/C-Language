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

    printf("Array elements are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

