#include<stdio.h>
//wap to answer given formula (x+y)2.

void main()
{
	int x,y,ans;
	
	printf("Enter num1: ");
	scanf("%d",&x);
	printf("Enter num2: ");
	scanf("%d",&y);
	
	ans= (x*x) + 2*(x*y) + (y*y);
	printf("The ans is %d",ans);
}
