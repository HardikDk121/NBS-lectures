#include <stdio.h>

void calculator()
{
    char op;
    printf("\nRecursive Calculator");
    printf("\nEnter '+' for addition ");
    printf("\nEnter '-' for subtraction ");
    printf("\nEnter '*' for multiplcation ");
    printf("\nEnter '/' for divison ");
    printf("\nEnter '!' for exit ");
    printf("\nEnter :");
    scanf("\n%c", &op);

    if (op == '!')
    {
        return;
    }

    int num1,result;
    printf("\nEnter two numbers :");
    scanf("%d %d",&num1 ,&result);
    
    if (op == '+')
    {
        printf("addtion of  is : %d ", result + num1 );
    }
    else if (op == '-')
    {
        printf("subtraction is : %d ", result - num1 );
    }
    else if (op == '*')
    {
        printf("multiplcation is : %d ", result * num1 );
    }
    else if (op == '/')
    {
        printf("divsion is : %d ", result / num1 );
    }
    else
    {
        printf("unknown opration !!! " );
    }
    calculator();   

}
int main()
{
    calculator();
    return 0;
}