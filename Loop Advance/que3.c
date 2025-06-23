#include<stdio.h>

void main()
{
    int num, sum = 0, product = 1, digit, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        product = product * digit;
        num = num / 10;
    }

    if(sum == product)
        printf("The number is a Magic Number.");
    else
        printf("The number is Not a Magic Number.");
}

