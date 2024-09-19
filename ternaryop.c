#include <stdio.h>

int main()
{
    int a=10 , b=15 , c=20 , d=25;

    a=a>b?a:b;
    a=a>c?a:c;
    a=a>d?a:d;
    printf("%d",a);
    
    return 0;
}