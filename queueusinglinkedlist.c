#include<stdio.h>
#include<stdlib.h>
struct queue 
{
    int number;
    struct queue *next;
}*front = NULL ,*rear = NULL;
struct queue* create( int number)
{
    struct queue *node =(struct queue*) malloc(sizeof(struct queue));
    if (node == NULL)
       return NULL;
    node ->number = number;
    node ->next = NULL;
    return node; 
}
void enqueue(int number)
{
    struct queue *newnode = create(number);
    if (front == NULL)
    {
        front = newnode;
        rear = newnode; 
        return;
    }
    rear ->next = newnode;
    rear = newnode;
}
void dequeue()
{
    if(front==NULL)
    {
        printf("queue khail hai");
        return;
    }
    else if (front == rear)
    {
        front =NULL;
        rear = NULL;
        return;
    }
    front = front -> next;
}
void display()
{
    if (front==NULL)
    {
        printf("queue khail hai");
        return;
    }
    for (struct queue *node =front; node != NULL; node = node -> next)
        printf("%d\t", node->number);
}
int main()
{   
    enqueue(1);   
    enqueue(2);   
    enqueue(3);   
    enqueue(4);   
    dequeue();
    display();
    return 0;
}