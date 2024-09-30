//write a program to find if charcther is uppercase or lowercase
#include <stdio.h>
int main()
{
     char ch;
     printf("Enter char :");
     scanf("%c",&ch);
     if (ch>='a'&& ch<='z')
     {
        printf("lowercase");
     }
     else if(ch>='A'&& ch<='Z')
     {
        printf("uppercase");
     }
    else
    {
        printf("bhai abcd dal");
    }
    return 0;
}