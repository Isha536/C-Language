#include<stdio.h>

void main()
{
    int year = 2000;

    while(year <= 3000)
    {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            printf("%d\n", year);
        year++;
    }
}

