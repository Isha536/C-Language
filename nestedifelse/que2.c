#include<stdio.h>

void main ()
{
	int a,b,c,d;
	
	printf("ENTER a:");
	scanf("%d",&a);
	
	printf("ENTER b:");
	scanf("%d",&b);
	
	printf("ENTER c:");
	scanf("%d",&c);
	
	printf("ENTER d:");
	scanf("%d",&d);
	
	
	//nested if else 
	//a,b,c,d
	if (a>b)
	{
		//a,c,d
		if(a>c)
		{
			if (a>d)
			{
				//a
				printf("a IS MAXIMUM.");
					
			}
			else 
			{
				//d
				printf("d IS MAXIMUM.");	
			}	
		}
		else
		{
			//c,d
			if(c>d)
			{
				//c
				printf("c IS MAXIMUM.");	
			}
			else
			{
				//d
				printf("d IS MAXIMUM.");	
			}
		}			
	}
	else 
	{
		if (b>c)
		{
			//b,d
			if(b>d)
			{
				//b
				printf("b IS MAXIMUM.");	
			}
			else 
			{
				//d
				printf("d IS MAXIMUM.");	
			}	
		}
		else 
		{
			if (c>d)
			{
				//c
				printf("c IS MAXIMUM.");		
			}
			else 
			{
				//d
				printf("d is maximum.");
			}	
		}	
	}
	
}