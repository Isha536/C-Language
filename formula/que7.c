#include<stdio.h>

//(x + y + z)2 = x2 + y2 + z2 + 2(xy + yz + zx)

void main()
{
    int x, y, z, ans;

    printf("Enter num1: ");
    scanf("%d", &x);
    printf("Enter num2: ");
    scanf("%d", &y);
    printf("Enter num3: ");
    scanf("%d", &z);

    ans = (x*x) + (y*y) + (z*z) + 2*(x*y + y*z + z*x);
    printf("The ans is %d", ans);
}

