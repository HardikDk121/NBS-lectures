#include <stdio.h>
struct circularlinklist
{
    int number;
    struct circularlinklist *next;
}*head=NULL,*tail=NULL;
struct circualrlinklist* create(int number)
{
    struct circularlinklist *node = (struct circularlinklist* )malloc(sizeof(struct circularlinklist));     
    if (node== NULL)
    {
        printf("Memory nahi he");
        exit(0);
    }
    node -> number= number;
    node ->next = NULL;
    return node;
}
void insertatlast(int number)
{
    struct circularlinklist *newnode = create(number);
    if (head==NULL)
    {
        head = newnode;
        tail = newnode;
        newnode->next = newnode;
    }
    tail->next = newnode;
    tail = newnode;
    newnode ->next =head;
}
void display()
{
    struct circularlinklist *node = head;

    for (; node ->next=head; node = node -> next)
        printf("%d", node -> number);    
    printf("%d", node -> number);    

    
}
