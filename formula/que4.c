#include<stdio.h>

// (x - y)3 = x3 - 3x2y + 3xy2 - y3

void main()
{
    int x, y, ans;

    printf("Enter num1: ");
    scanf("%d", &x);
    printf("Enter num2: ");
    scanf("%d", &y);

    ans = (x*x*x) - 3*(x*x*y) + 3*(x*y*y) - (y*y*y);
    printf("The ans is %d", ans);
}

