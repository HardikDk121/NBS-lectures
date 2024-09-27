#include <stdio.h>

int main()
{
    int sum = 0 , flag = 1;
    loop:
        printf("Enter 0 for exit or enter a number to add :");
        scanf("%d",&flag);
        sum = sum+ flag;
        if (flag)
            goto loop;        
    printf("sum :%d",sum);
}