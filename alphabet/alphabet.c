#include<stdio.h>
void main ()
{
	int i,j;
	
	//a
	for(i=1; i<=7; i++)
	{
		for (j=1; j<=5; j++)
		{
			if(j==1 || j==5 || i==1 || i==4)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n");
	
	//b
	for(i=1; i<=7; i++)
	{
		for (j=1; j<=5; j++)
		{
			if(j==1||(i==1 && j==2) || (i==1 && j==3) )
			{
				printf("*  ");
			}
			else if(i==2 && j==5)
			{
				printf("* ");
			}
			else if(i==4 || (i==3 && j==5))
			{
				printf("* ");
			}
			else if((i==5 && j==5) || (i==6 && j==5))
			{
				printf("* ");
			}
			else if(i==7||j==2 &&j==3)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n");

	//c
	for(i=1; i<=7; i++)
	{
		for (j=1; j<=5; j++)
		{
			if(i==1||j==1||i==7)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n");
	
	//d
	for(i=1; i<=7; i++)
	{
		for (j=1; j<=5; j++)
		{
			if(j==1 || (i==1 && j==2))
			{
				printf("* ");
			}
			else if((i==2 && j==3) || (i==3 && j==4))
			{
				printf(" *");
			}
			else if((i==4 && j==4))
			{
				printf(" *");
			}
			else if((i==5 && j==4))
			{
				printf(" *");
			}
			else if((i==6 && j==3) || (i==7 && j==2))
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n");
	
	//e
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(i==1 || j==1 || i==4 || i==7)
			{
				printf("* ");	
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n");
	
	//f
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(i==1 || j==1 || i==4)
			{
				printf("* ");	
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n");
	
	//g
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=5; j++)
		{
			if((i==1 && j==2) || (i==1 && j==3) || (i==1 && j==4))
			{
				printf("* ");
			}
			else if((i==2 && j==1)||(i==4 && j==1 )||
			(j==1 && i==3) || (i==5 && j==1))
			{
				printf("* ");
			}
			else if((i==6 && j==2) || (i==6 && j==3) || (i==6 && j==4))
			{
				printf("* ");
			}
			else if(i==5 && j==4)
			{
				printf(" *");
			}
			else if((i==4 && j==4) || (i==4 && j==3))
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n");
	
	//h
	for(i=1; i<=7; i++)
	{
		for (j=1; j<=5; j++)
		{
			if(j==1 || j==5 || i==4)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n");
	
	//i
	for(i=1; i<=7; i++)
	{
		for (j=1; j<=5; j++)
		{
			if(i==1 || i==7 || j==3)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n");
	
	//j
	for(i=1; i<=7; i++)
	{
		for (j=1; j<=6; j++)
		{
			if(i==1 || j==4)
			{
				printf("* ");
			}
			else if((i==7 && j==3)||(i==7 && j==2))
			{
				printf("* ");
			}
			else if(i==6 && j==2)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
