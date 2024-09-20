#include <stdio.h>

int main()
{
    int a=10 , b=15 , c=20 , d=25 ,max=a;
/*
    a=a>b?a:b;
    a=a>c?a:c;
    a=a>d?a:d;
    printf("%d",a);
 */
    if(max<b) max=b;
    if(max<c) max=c;
    if(max<d) max=d;

    printf("%d",max);
    return 0;
}