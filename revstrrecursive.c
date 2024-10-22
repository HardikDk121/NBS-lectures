#include <stdio.h>
#include <string.h>

void revstr(char* string)
{
   //static int index = 0;
   if (*string == '\0')
   {
        return;
   }  
   revstr( string +  1);
   printf("%c",*string);
        
}

int main()
{
    char string[5];

    printf("\nEnter a string:");
    scanf("%s",string);

    printf("\nreversed string :");
    revstr(string);
    return 0;
}