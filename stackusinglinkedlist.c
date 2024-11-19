#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int number;
    struct stack *prev;
}*top=NULL;
struct stack* create( int number)
{
    struct stack *node =(struct stack*) malloc(sizeof(struct stack));
    if (node == NULL)
       return NULL;
    node ->number = number;
    node ->prev = NULL;
    return node; 
}
void push(int number)
{
    struct stack *newnode = create(number);
    if (top == NULL)
    {
        top = newnode;
        return;
    }
    newnode ->prev = top;
    top = newnode;
}
void pop()
{
    if(top==NULL)
    {
        printf("stack khail hai");
        return;
    }
    top = top -> prev;
}
void display()
{
    if (top==NULL)
    {
        printf("stack khail hai");
        return;
    }
    for (struct stack *node =top; node != NULL; node = node->prev)
        printf("%d\t", node->number);
}
int main()
{   
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    pop();
    
    push(4);
    display();
    return 0;
}