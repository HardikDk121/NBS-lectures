/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define max 32
int arr[max];

void insert(int data,int index)
{
    if (index >max || index <0)
    {
        return;
    }
    arr[--index]=data;
}

void binarytree(int data)
{
    static int index = 1;
    insert(data,index);
    index++;
}

void print()
{
    for(int i=0; i<max ;i++)
    {
        if(arr[i]!=0)
        {
            printf("%d",arr[i]);
            int t =2*i;
            if((t+1)<max)
                printf(" %d ",arr[t+1]);
            if((t+2)<max)
                printf(" %d ",arr[t+2]);
            printf("\n");
        }
    }
}

int main()
{
    binarytree(5);
    binarytree(6);
    binarytree(7);
    binarytree(8);
    binarytree(9);
    binarytree(10);
    print();
    return 0;
}