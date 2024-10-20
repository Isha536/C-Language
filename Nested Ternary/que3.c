#include<stdio.h>
#include<conio.h>

void main ()
{
	int a,b,c,d;
	
	printf("ENTER THE VALUE OF a,b,c and d: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	(a>b)?
	(a>c)?
	(a>d)?
	    printf("a is maximum"):
	  printf("d is maximum"):
	(c>d)?
	    printf("c is maximum"):
		printf("d is maximum"):
	(b>c)?
	(b>d)?
	    printf("b is maximum"):
		printf("d is maximum"):
    (c>d)?
        printf("c is maximum"):
        printf("d is maximum");
		  
}