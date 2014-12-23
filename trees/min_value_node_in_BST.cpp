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
int min_value(tree* node)
{
         if(node->left==NULL)
         return node->data;
         else
         return(min_value(node->left)); 
}
int main()
{
    tree *root=add_node(4);
    root->left=add_node(2);    
    root->right=add_node(5);
    root->left->left=add_node(1);
    root->left->right=add_node(3);
    cout<<min_value(root);
    system("pause");
    return 0;    
}
