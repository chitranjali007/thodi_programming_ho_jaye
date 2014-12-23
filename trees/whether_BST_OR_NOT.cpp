#include<iostream>
#include<iomanip>
#include<cstdio>
#include<malloc.h>

using namespace std;
struct tree{
       int data;
       struct tree *right;
       struct tree *left;
       
       };
    
struct tree* add_node(int d)
{
       struct tree *node=(struct tree*)malloc(sizeof(struct tree));
       node->data=d;
       node->right=NULL;
       node->left=NULL;       
       return node;
}

int is_bst(tree * node)
{
    if(node==NULL || (node->left==NULL && node->left==NULL)) return 1;
    if((node->left->data > node->data) || (node->right->data < node->data))
    {
                        
                        return 0;
    }
    else
    {
        return(is_bst(node->left) && is_bst(node->right));
    }    
}
int main()
{
    tree *root=add_node(4);
    root->left=add_node(2);    
    root->right=add_node(5);
    root->left->left=add_node(1);
    root->left->right=add_node(3);
    root->right->left=add_node(6);
    root->right->right=add_node(7);
      
    cout<<is_bst(root);
    system("pause");
    return 0;    
}
