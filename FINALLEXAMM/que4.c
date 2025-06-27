#include<stdio.h>

void main()
{
	//wap to print square of 1d array using pointer (pointerr nhi ataa)
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:");
    for(i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("The squares are: ");
    for(i = 0; i < n; i++)
    {
        printf("%d", a[i] * a[i]);
        if(i != n - 1)
        {
            printf(" ");
        }
    }
}

