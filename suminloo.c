#include <stdio.h>

int main()
{
    int newinput=0,sum=0,flag=1;

        printf("Enter a number  :");
        scanf("%d",&sum);
    while (flag)
    {
        printf("\ndo you wish to continue ? press 0 to exit :",sum);
        scanf("%d",&flag);
        sum = sum + flag;
    }
        printf("sum %d",sum);
    
    return 0;
}