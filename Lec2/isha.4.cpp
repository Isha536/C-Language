#include<stdio.h>
#include<conio.h>

void main ()
{
	float interest,p,r,n;
	printf("ENTER THE VALUE OF p:");
	scanf("%f",&p);
	printf("ENTER THE VALUE OF r:");
	scanf("%f",&r);
	printf("ENTER THE VALUE OF n:");
	scanf("%f",&n);
	interest= (p*r*n) /100;
	printf("the interest is %f", interest );

	
}