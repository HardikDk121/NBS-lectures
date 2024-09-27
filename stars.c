#include <stdio.h>
int main()
{
    int row=1 ,column=1,startcount=5;
/*


    for (row =1 ; row <= startcount; row++)
    {
        for (column = 1; column <= row; column++)
        {
            
            printf("*");
        }
        printf("\n");
    }
*/
    for (row=5; row >= 0; row--)
    {
        for (column =1; column <= row; column++)
        {
            printf("*");
        }
        printf("\n");
        
    }

    
    return 0;
}