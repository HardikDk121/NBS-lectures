#include <stdio.h>
#include <stdlib.h>

struct linklist
{
    int data;
    struct linklist *left ,*right;   
}*root=NULL;

struct linklist*  create(int data)
{
    struct linklist* node = (struct linklist*)malloc(sizeof(struct linklist));   
    node->data = data;
    node->left=NULL;
    node->right=NULL;
    return node;
}
void insert(struct linklist *node,int data)
{
    if (root == NULL)
    {
        root = create(data);
        return;    
    }
    else if (data < node -> data )
    {
        if (node->left==NULL)
        {
            struct linklist *newnode = create(data);
            node ->left = newnode;
            return;
        }
        node = node ->left;
    }
    else 
        {
            if (node->right==NULL)
            {
                struct linklist *newnode =create(data);
                node ->right = newnode;
                return;
            }
            node = node ->right;
        }
    insert(node , data);
}
void bst(int data)
{
    insert(root,data);   
}
void in_order(struct linklist *node)
{
    if(node==NULL)
        return;
   
    if (node->left!=NULL)
        in_order(node->left);
   
    printf(" %d \t", node->data);
    
    if (node->right!=NULL)
        in_order(node->right);
    
}
void pre_order(struct linklist *node)
{
    if(node==NULL)
        return;
    printf(" %d \t", node->data);
    pre_order(node->left);
    pre_order(node->right);
}
void post_order(struct linklist *node)
{
    if(node==NULL)
        return;
    post_order(node->left);
    post_order(node->right);
    printf(" %d \t", node->data);
}
void search(struct linklist *node ,int data)
{
    if(node==NULL)
    {
        printf("\ndata not found");
        return;
    }
    if(node->data==data)
        printf("\n%d" ,node->data);
    else if( data < node ->data )
        search(node->left ,data);
    else 
        search(node->right ,data);
    
}
int main()
{
    bst(7);
    bst(2);
    bst(1);
    bst(7);
    bst(11);
    bst(11);
    bst(9);
    bst(7);
    bst(9);
    
    pre_order(root);
    printf("\n");

    in_order(root);
    printf("\n");
    
    post_order(root);

    search(root,911);
    return 0;
}