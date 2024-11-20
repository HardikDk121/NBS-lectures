#include <stdio.h>
#define max 30
int array[max];
void insert(int data ,int index)
{
    if (index>=max || index<0 )
        return;
    else if(array[index]==0)
        array[index]=data;
    else if(data <array[index])
        insert(data,(index *2)+1);
    else 
        insert(data,(index * 2)+1);        
}
void binarysearchtree(int data)
{
    insert(data ,0);
}
int main()
{
    
    return 0;
}