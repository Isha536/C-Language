#include<stdio.h>

void main()
{
	int i,j;
	//k
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==1 || (i==2 && j==4))
			{
				printf("* ");
			}
			else if((i==3 && j==3) || (i==4 && j==2) || (i==1 && j==5))
			{
				printf("* ");
			}
			else if((i==5 && j==3) || (i==6 && j==4) || (i==7 && j==5))
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
	
	//l
	for(i=1; i<=7; i++)
	{
		for (j=1; j<=5; j++)
		{
			if(i==7 || j==1)
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
	
	//m
	for(i=1; i<=6; i++)
	{
		for (j=1; j<=5; j++)
		{
			if(j==1 || j==5)
			{
				printf("* ");
			}
			else if((i==2 && j==2) ||(i==2 && j==4) || (i==3 && j==3))
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
	//n
	for(i=1; i<=5; i++)
	{
		for (j=1; j<=5; j++)
		{
			if(j==1 || j==5)
			{
				printf("* ");
			}
			else if((i==2 && j==2) ||(i==3 && j==3) || (i==4 && j==4))
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
	//o
	for(i=1; i<=6; i++)
	{
		for (j=1; j<=5; j++)
		{
			if((i==2 && j==1)||(i==3 && j==1) || (i==4 && j==1)
			||(i==5 && j==1))
			{
				printf("*  ");
			}
			else if((i==1 && j==2)||(i==1 && j==3) || (i==1 && j==4))
			{
				printf("* ");
			}
			else if((i==2 && j==5)||(i==3 && j==5) || (i==4 && j==5)
			|| (i==5 && j==5))
			{
				printf("* ");
			}
			else if((i==6 && j==2)||(i==6 && j==3) || (i==6 && j==4))
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
	//p
	for(i=1; i<=7; i++)
	{
		for (j=1; j<=5; j++)
		{
			if(j==1 || (i==1 && j==2) || (i==1 && j==3))
			{
				printf(" * ");
			}
			else if((i==4 && j==2) || (i==4 && j==3))
			{
				printf(" * ");
			}
			else if((i==2 && j==5) || (i==3 && j==5))
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
	//q
	for(i=1; i<=7; i++)
	{
		for (j=1; j<=6; j++)
		{
			if((i==2 && j==1)||(i==3 && j==1) || (i==4 && j==1)
			||(i==5 && j==1))
			{
				printf("*  ");
			}
			else if((i==1 && j==2)||(i==1 && j==3) || (i==1 && j==4))
			{
				printf("* ");
			}
			else if((i==2 && j==5)||(i==3 && j==5) || (i==4 && j==5)
			|| (i==5 && j==5))
			{
				printf("* ");
			}
			else if((i==6 && j==2)||(i==6 && j==3) || (i==6 && j==4))
			{
				printf("* ");
			}
			else if((i==4 && j==3) || (i==5 && j==4) || (i==7 && j==6)
			|| (i==6 && j==5))
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
	//r
	for(i=1; i<=7; i++)
	{
		for (j=1; j<=5; j++)
		{
			if(j==1 || (i==1 && j==2) || (i==1 && j==3))
			{
				printf(" * ");
			}
			else if((i==4 && j==2) || (i==4 && j==3))
			{
				printf(" * ");
			}
			else if((i==2 && j==5) || (i==3 && j==5))
			{
				printf("* ");
			}
			else if((i==5 && j==3) || (i==6 && j==4) || (i==7 && j==5))
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
}
