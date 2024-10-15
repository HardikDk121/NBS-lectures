#include <stdio.h>
struct abc
{
    int data;
    int info;

    /* data */
}b;

int main()
{
    struct abc *a;
    a = &b;
    a->data=5;
    a->info=10;
    printf("%d %d", a->data , b.info);
    
}
