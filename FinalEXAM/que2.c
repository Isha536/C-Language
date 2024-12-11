#include<stdio.h>
#include<conio.h>
void main()
{
	//wap to find min numbers from four numbers.
	int a,b,c,d;
	
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);
	printf("Enter d: ");
	scanf("%d",&d);
	
	//to find min
	//a,b,c,d
	//a,b
	if(a<b)
	{
		//a,c
		if(a<c)
		{
			//a,d
			if(a<d)
			{
				//a
				printf("a is MINIMUM.");	
			}
			else
			{
				//d
				printf("d is MINIMUM.");	
			}
		}
		else
		{
			//c,d
			if(c<d)
			{
				//c
				printf("c is MINIMUM.");
			}
			else
			{
				//d
				printf("d is MINIMUM.");
			}	
		}
	}
	else
	{
		//b,c
		if(b<c)
		{
			//b,d
			if(b<d)
			{
				//b
				printf("b is MINIMUM.");	
			}
			else
			{
				//d
				printf("d is MINIMUM.");
			}
		}
		else
		{
			//c,d
			if(c<d)
			{
				//c
				printf("c is MINIMUM.");	
			}
			else
			{
				//d
				printf("d is MINIMUM.");
			}	
		}
	}
	
}
