// write a program for finachi series which and print previous three number 
#include <stdio.h>

int main()
{
    int n1=1,n2=2,n3=3, index=1 ,fibosum=0;
    for ( index = 1; index <=3; index++)
    {
        fibosum = n1 + n2 + n3;
        n1 = n2;
        n2 = n3;
        n3 = fibosum;
        printf( "%d \t", n3);
    }
    
}