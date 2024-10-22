#include <stdio.h>

int fun(int a , int n)
{
    static snum=0;
    snum=(snum*10)+(n%10);
}
int main()
{
    int a=123;
    printf("%d",fun(a,a));
    return 0;
}