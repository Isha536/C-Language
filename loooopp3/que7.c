#include<stdio.h>

void main()
{
    int year;

    for(year = 2000; year <= 3000; year++)
    {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            printf("%d\n", year);
    }
}

