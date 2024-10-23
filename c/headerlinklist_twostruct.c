//headerlinklist_twostruct

#include <stdio.h>
#include <stdlib.h>
struct header
{
    int size;
    struct linklist *startnode;

}*head=NULL;

struct linklist
{
    int number;
    struct linklist* next;
}
*tail=NULL;

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
        struct header * headernode=(struct header *)malloc(sizeof( struct header));
        headernode -> size = 0;
        headernode->startnode = newnode;
        head = headernode;
    }

    if(tail != NULL)
        tail -> next = newnode;
    tail = newnode;
    head->size++;
    
}
void display()
{
    printf("size of linklist  is :%d \n", head -> size);
    for (struct linklist *node = head->startnode ; node!=NULL ; node = node->next)
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