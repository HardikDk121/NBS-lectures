#include <stdio.h>
#include <string.h>
int main()
{
    char string[5] , revstring[5];
   
    printf("Enter a string :");
    scanf("%s",string);
    
    int len = strlen(string);
    for (int i = 0; i < len; i++)
    {
        revstring[i] = string[len - i - 1 ];      
    }
    revstring[len] = '\0';
    printf("%s",revstring);
    return 0;
}