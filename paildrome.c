#include <stdio.h>

int fun(int i, char*a)
{
    static int j=0;
    if (a[i]!='\0')
    {
        fun(i+1,a);
        printf("%c\t %c\n",a[i],a[j]);
        j++;
        /* code */
    }
    
}

int main()
{
    char a[20] ={"naman"};
    fun(0,a);
}