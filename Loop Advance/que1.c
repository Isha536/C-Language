#include<stdio.h>

void main()
{
    int num, original, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num > 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if(original == reversed)
        printf("The number is Palindromic.");
    else
        printf("The number is Not Palindromic.");
}

