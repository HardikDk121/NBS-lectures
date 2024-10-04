#include <stdio.h>

int onetoN(int number)
{
    if( number == 1)
    return 1;

    return number + onetoN(number-1);
}
int main()
{
    int number;
    printf("Enter a number :");
    scanf("%d",&number);

    printf("sum is %d",onetoN(number));
    return 0;
}