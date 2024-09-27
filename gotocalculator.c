#include <stdio.h>
int main()
{
    int number,result ,choice;
    start:

        printf("Enter 0 for exit 1 for addition 2 for subtraction 3 for multpliction 4 for divide :");
        scanf("%d",&choice);
        
        if (choice == 0 ) goto end;

        printf("Enter two number :");
        scanf("%d %d", &number,&result);
        
        if (choice == 1) 
        {
            result = number + result;
            
                
        }
    else if (choice == 2)
        {
            result = number - result;
            
            
        }
    else if (choice == 3)
        {
            result = number * result;
            
            
        }
    else if (choice == 4)
        {
            result = number / result;
        }
    printf("%d \n" , result);

    goto start;
    
    end:
        return 0;
}