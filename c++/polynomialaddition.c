#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct polynomial
{
    int power, prefix;
    struct polynomial *next;  
}*head1=NULL ,*head2 = NULL;

struct polynomial * format( char *expression ,struct polynomial *head)
{
    struct polynomial *variable,*tail;
    int index=0;
    
    while (index < strlen(expression))
    {   
        if (expression[index]=='x')
        {
            variable = (struct polynomial*)malloc(sizeof(struct polynomial)); 
            if (head == NULL)
            {
                head = variable;
                tail = variable;
            }
            else 
            {
                tail -> next = variable;
                tail = variable;
            }
            if(expression[index - 1] != '+' && index > 0)
            {
                    variable ->prefix = atoi(&expression[index - 1]);
                    printf("prefix :%d",variable ->prefix); 
            }
            else
            {
                    variable ->prefix = 1;
                    printf("prefix :%d",variable ->prefix); 
                
            }
            if(expression[index+1]=='^')
            {
                    variable ->power = atoi(&expression[index+2]);
                    printf("power  :%d",variable ->power); 
            }
            else
            {
                    variable ->power =1;
                    printf("power :%d",variable->power);
            }
        }
        index++;

    }
    printf("\n");
    return head;
}
struct polynomial * addition(char* expression1, char* expression2)
{
    head1 = format(expression1,head1);
    head2 = format(expression2,head2);
    struct polynomial *head=head1;
    while(head1 !=NULL && head2 !=NULL)
    {
        if (head1 -> power == head2 ->power)
        {
            head1->prefix +=head2 ->prefix;

            head1 = head1 ->next;
            head2 = head2 ->next;
        }
        else if(head1 ->power > head2 ->power)
        {
            head1 = head1 ->next;
        }
        else 
        {
            head2 = head2->next;
        }
    }
    return head;
}
void display(char* expression1, char* expression2)
{
    struct polynomial *head = addition(expression1,expression2);
    printf(" %dx^%d " ,head->prefix ,head->power);
    for ( head = head->next ;head!=NULL;head = head->next)
    {
        printf("+ %dx^%d " ,head->prefix ,head->power);
    }
}
int main()
{
    char *exp1 = "4x^3+3x^2+2x" , *exp2 = "3x^2+2x";
    display(exp1,exp2);
    return 0;
}
