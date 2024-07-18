#include<stdio.h>
#include<conio.h>

void main ()
{
	float area,b,h;
	printf("ENTER AREA OF b:");
	scanf("%f",&b);
	printf("ENTER THE AREA OF h");
	scanf("%f" ,&h);

	area= 0.5*(b*h);
	printf("THE AREA OF CIRCLE IS %.2f",area);
}