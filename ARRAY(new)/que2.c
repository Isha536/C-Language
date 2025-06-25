#include<stdio.h>

void main()
{
    int n;
    float sum = 0, avg;

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

    avg = sum / n;

    printf("Average of an Array: %.2f", avg);
}

