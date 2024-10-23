#include <stdio.h>
#include <stdlib.h>
struct linklist
{
    int number;
    struct linklist* next;
} *head=NULL ,*tail=NULL;

struct  linklist* createnode(int number)
{
    struct linklist *node = (struct linklist *)malloc(sizeof(struct linklist));
    if(node==NULL)
    {
        printf("memory nahi hai");
        exit(0);
    }
    node ->number = number;
    node ->next = NULL;
    return node;
}
void insertlast(int number)
{
    struct linklist *newnode = createnode(number);
    if (head==NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail -> next = newnode;
    tail = newnode;
}
void display()
{
    for (struct linklist *node=head; node!=NULL ; node = node->next)
        printf("%d  \t", node -> number);
}
int main()
{
    insertlast(1);
    insertlast(2);
    insertlast(3);
    insertlast(4);
    insertlast(5);
    display();
    return 0;
}