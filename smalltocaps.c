#include <stdio.h>

int main()
{
    char word[10];
    printf("Enter a word :");
    scanf("%s",&word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i]>='a' && word[i]<='z')
        {
            /* code */
            word[i] = word[i] -32 ;
        }
        
    }
    printf("%s",word);
    return 0;
}