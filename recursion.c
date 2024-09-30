#include <stdio.h>

int fun(int number)
{
    if (number>1)
        fun( number-1 );
        
    printf("%d\n",number);
}
int main()
{
    fun(5);
    return 0;
}
