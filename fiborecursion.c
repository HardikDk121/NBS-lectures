#include <stdio.h>

int fibonachi(int number)
{
    if(number == 1) 
        return 1;
    
   else if(number ==2)
        return 3;
   else if(number == 3)
        return 3;
   else
        return fibonachi(number-1) + fibonachi(number-2) +fibonachi(number - 3);

}
int helperfunction(int number)
{
    if (number>1)
    {
        fibonachi(number-1);
    }
    printf("%d\t",fibonachi(number));
}
int main()
{
    helperfunction(5);
    return 0;
}