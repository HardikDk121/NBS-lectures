//Write a program to find a day to the given year
#include <stdio.h>

int main()
{
    int year;

    printf("enter a year :");
    scanf("%d",&year);

    int day=((year-1)+(year/4))%7;


    return 0;

}