#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch,line[20],sentance[50];

    scanf("%c",&ch);
    scanf("%s",&line);
    scanf("\n%[^\n]%*c" ,&sentance);

    printf("%c",ch);
    printf("\n%s",line);
    printf("\n%s" ,sentance);
    
    return 0;

}