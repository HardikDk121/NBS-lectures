/* write a program to print even till the user wants*/
#include <stdio.h>

int main()
{
    int limit , index=2;
    printf("Enter limit : ");
    scanf("%d",&limit);
    while (index <= limit)
    {
        printf("\t %d",index);
        
        index+=2;
    }
    
    return 0;
}