#include<stdio.h>

//(x + y + z)3 = x3 + y3 + z3 + 3(x2y + x2z + y2x + y2z + z2x + z^2y) + 6xyz

void main()
{
    int x, y, z, ans;

    printf("Enter num1: ");
    scanf("%d", &x);
    printf("Enter num2: ");
    scanf("%d", &y);
    printf("Enter num3: ");
    scanf("%d", &z);

    ans = (x*x*x) + (y*y*y) + (z*z*z) + 3*((x*x*y) + (x*x*z) + (y*y*x) + (y*y*z) + (z*z*x) + (z*z*y))+ 6*x*y*z;

    printf("The ans is %d", ans);
}

