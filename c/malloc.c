#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int *a = (int *)malloc(1*(sizeof(int)));
    *a=5;
    printf("%d", *a);
    return 0;
}