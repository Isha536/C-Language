#include<stdio.h>
#include<conio.h>
void main()
{
	float a1,a2,a3;
	
	printf("ENTER THE VALUE OF FIRST ANGLE:");
	scanf("%f",&a1);
	
	printf("ENTER THE VALUE OF SECOND ANGLE:");
	scanf("%f",&a2);
	
	a3= 180-(a1+a2);
	printf("THE VALUE OF THIRD ANGLE IS :%.2f ",a3);
	
}