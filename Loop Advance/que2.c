#include<stdio.h>

void main()
{
    int num, original, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num > 0)
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if(original == sum)
        printf("The number is Armstrong.");
    else
        printf("The number is Not Armstrong.");
}

