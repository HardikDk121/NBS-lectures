#include<stdio.h>
#include<stdlib.h>

struct LinkList
{
    int number;
    struct LinkList *next;

}*head=NULL , *tail =NULL;

struct LinkList* createnode(int number)
{
    //struct LinkList *node = (struct LinkList *)malloc( 1 * sizeof(struct LinkList));
    struct LinkList *node = new LinkList();
    if (node ==NULL)
    {
        printf("Memory nahi hai");
        exit(0);
    }
    node -> number = number;
    node ->next =NULL;
    return node;
}
void insert(int number)
{
   struct LinkList *node = createnode(number);
   if (head==NULL)
   {
        head =  node;
        tail = node;
        return;
   }
   tail -> next =node;
   tail = node;   
}
void insertwithatpos(int number , int pos)
{
    if (pos < 2  && head==NULL)
    {
        insert(number);
        exit(0);   
    }
    
    struct LinkList *ptr = head,*preptr = NULL;
    for (int  index = 1; index < pos-1; index++)
    {
        if (ptr ->next == NULL)
        {
            printf("Position nahi he");
            exit(0);
        }

        ptr = ptr->next;
        preptr = ptr;
    }
    struct LinkList *node = createnode(number);
    
    node -> next = ptr -> next;
    ptr -> next = node;

} 
void display()
{
    if (head ==NULL)
    {
        printf("Khail che");
        return;
    }
    
    
    for ( struct LinkList *node =head ; node!=NULL ;node = node ->next)
    {
        printf("%d \t", node -> number);
    }
    
}
int main()
{
    insert(5);
    insert(7);
    insert(8);
    insert(9);
    insert(10);
    insertwithatpos(6,2);
    display();
    return 0;
}