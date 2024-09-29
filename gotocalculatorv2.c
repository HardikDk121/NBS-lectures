#include <stdio.h>
int main()
{
    float number,result;
    char choice;
    
    printf("Enter a expression :");
    scanf("%d" , &result);

    start:
        scanf("\n%c",&choice);
        if (choice == '?' ) goto end;
        
        else
        {
            scanf("%d", &number);
            
            if (choice == 1) 
            
                result = number + result;        
            
            else if (choice == 2)
            
                result = number - result;
                
            else if (choice == 3)
    
               result = number * result;    
            
            else if (choice == 4)

                result = number / result;
            
            goto start;
    
        }      
    end:
        printf("%d \n" , result);
        return 0;
}