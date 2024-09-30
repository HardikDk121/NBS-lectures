//write a program to count duplicate charters in string 
#include <stdio.h>
#include <ctype.h>
int main()
{
    char sentance[25];
    int alphabet[26]={0};

    printf("Enter a string :");
    scanf("%s",sentance);
    for ( int i=0 ; sentance[i]!='\0' ; i++)
    {
        if (sentance[i] >='a' && sentance[i] <='z')
        {
            alphabet[ i-'a' ] = alphabet[ i-'a'] + 1;
        }
        else if (sentance[i] >='A' && sentance[i] <='Z')
        {
            alphabet[ i-'A' ] = alphabet[ i-'A'] + 1;
        }
    }
    for (int i=0; i<26 ;i++)
    {
        if (alphabet[i] > 1)
        {
            printf("%c",(i+65));
        }
        
    }
    
    
    return 0;
}