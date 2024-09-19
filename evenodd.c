#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char numberstr[25];
    printf("Enter a number :");
    scanf("%s",numberstr);
    int index=0;
    while (numberstr[index+1] != '\0') {
        index++;
    }
    char* last_digitchar= &numberstr[index];
    int last_digitint = atoi(last_digitchar);
    
    printf("%d %d",last_digitint,sizeof(numberstr));
    last_digitint%2==0?printf("Even value"):printf("Odd value");
    
    return 0;
}