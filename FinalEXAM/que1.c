#include<stdio.h>
#include<conio.h>
void main()
{
	//wap to convert celsius into fahrenheit.
	float celsius,fahrenheit;
	printf("Enter Celsius: ");
	scanf("%f",&celsius);
	
	fahrenheit= (celsius*1.8)+32;
	
	printf("After the conversion, fahrenheit= %.2f",fahrenheit);
}

