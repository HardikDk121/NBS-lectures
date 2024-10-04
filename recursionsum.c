#include <stdio.h>

void sum(int number , int result)
{
   if (number==0)
   {
        printf("%d",result);
   }
   else
   {
        printf("Enter a number to continue otherwise press 0 to exit:");
        scanf("%d",&number);
        sum(number , result + number);
   }
}
int main()
{
    int number , result;
    printf("Enter two numbers:");
    scanf("%d %d" , &number ,&result);
    
    result = number + result;
    sum(number,result);
    return 0;
}