#include<stdio.h>

//(x - y - z)3 = x3 - y3 - z3 - 3x2y - 3x2z + 3y2x + 3z2x + 6xyz

void main()
{
    int x, y, z, ans;

    printf("Enter num1: ");
    scanf("%d", &x);
    printf("Enter num2: ");
    scanf("%d", &y);
    printf("Enter num3: ");
    scanf("%d", &z);

    ans = (x*x*x) - (y*y*y) - (z*z*z)- 3*((x*x*y) + (x*x*z))+ 3*((y*y*x) + (z*z*x))+ 6*x*y*z;

    printf("The ans is %d", ans);
}

