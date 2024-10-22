#include <stdio.h>

void fun(int *a)
{
    *a=2*(*a);
}
int main()
{
    int a=2;
    fun(&a);
    printf("%d",a);
    return 0;
}