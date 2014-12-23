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

int count_leaf(tree * node,int count)
{
    if(node==NULL) return 0;
    if(node->left==NULL && node->right==NULL)
    {
                        count++;
                        return count;
    }
    else
    {
        return(count_leaf(node->left,count)+count_leaf(node->right,count));
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
       int count=0;
    cout<<count_leaf(root,0);
    system("pause");
    return 0;    
}
