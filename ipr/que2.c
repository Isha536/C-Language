#include<stdio.h>
#include<conio.h>
void main()
{
	//celsius to fahrenheit
	float celsius, fahranheit;
	
	printf("ENTER THE VALUE OF CELSIUS:");
	scanf("%f",&celsius);
	
	fahranheit= (1.8*celsius)+32;
	
	printf("the fahranheit of celsius is: %f",fahranheit);
}