#include <stdio.h>

int factorial(int number)
{
    if( number == 1)
    return 1;

    return number * factorial(number-1);
}
int main()
{
    int number;
    printf("Enter a number :");
    scanf("%d",&number);

    printf("sum is %d", factorial(number));
    return 0;
}