#include <stdio.h>

int main()
{
    
    int max =0 ,num=0 , n;
    
    printf("Enter qunatity of number :");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter a number : ");
        scanf("%d",&num);
        if ( max < num )
        {
            max = num;
        }
        
    }
    printf("max number : %d",max);
    
    
    return 0;
}