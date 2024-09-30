#include <stdio.h>

int main()
{
    int fifteenline=15 ,sevenline=7;
    
    for (int row = 1 ; row<=5 ; row++)
    {
        for (int column = 1; column<= row; column++)
        {
            
            if (column ==row)
            {
                printf("%d ",fifteenline);
                fifteenline = fifteenline-1;
            }
            if (column == row + 1)
            {
                printf("%d" ,sevenline);
                sevenline = sevenline + 1 ;
            }
            
            
        }
        printf("\n");
    }
    
    return 0;
}