#include <stdio.h>

void print( int number)
{
    if (number > 1)
    {
        print(number -1);
    }
        printf("%d",number);
    
}
void starptrn(int number)
{
    if (number > 0)
    {
        starptrn(number-1);
        print(number);
        printf("\n");
    }
    
}

int main()
{
    starptrn(5);
    return 0;

}