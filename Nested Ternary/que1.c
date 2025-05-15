#include<stdio.h>

void main ()
{
   int a,b,c,d;
	
	printf("ENTER THE VALUE OF a,b,c and d: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	(a<b)?
	(a<c)?
	(a<d)?
	    printf("a is minimum"):
	  printf("d is minimum"):
	(c<d)?
	    printf("c is minimum"):
		printf("d is minimum"):
	(b<c)?
	(b<d)?
	    printf("b is minimum"):
		printf("d is minimum"):
    (c<d)?
        printf("c is minimum"):
        printf("d is minimum");
}
