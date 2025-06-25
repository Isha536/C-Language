#include<stdio.h>

void main()
{
    int start, end;

    printf("Enter the first number: ");
    scanf("%d", &start);

    printf("Enter the second number: ");
    scanf("%d", &end);

    int leap[100], k = 0;

    for(int i = start; i <= end; i++)
    {
        if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            leap[k] = i;
            k++;
        }
    }

    printf("The array is: ");
    for(int i = 0; i < k; i++)
    {
        printf("%d", leap[i]);
        if(i != k - 1)
        {
            printf(", ");
        }
    }
}

