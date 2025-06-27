#include<stdio.h>
	//wap to reverse a string by udf
	//don't know string so number reverse program	
int reverse(int n)
{
    int revers = 0, remainder;

    while(n != 0)
    {
        remainder = n % 10;
        revers = revers * 10 + remainder;
        n = n / 10;
    }

    return revers;
}

void main()
{
    int num, result;

    printf("Enter any number: ");
    scanf("%d", &num);

    result = reverse(num);

    printf("Reverse is %d",result);
}
