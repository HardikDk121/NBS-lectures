#include <stdio.h>
int power(int number,int pow)
{
    if( pow == 1)
    return number;

    return number * power(number,pow-1);
}
int main()
{
    int number,pow;
    printf("Enter a number and it's power :");
    scanf("%d %d",&number);

    printf("%d", power(number ,pow));
    return 0;
}