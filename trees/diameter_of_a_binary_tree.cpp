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
    struct tree *root;
struct tree* add_node(int d)
{
       struct tree *node=(struct tree*)malloc(sizeof(struct tree));
       node->data=d;
       node->right=NULL;
       node->left=NULL;       
       return node;
}

int dia_tree(tree * node)
{   
   if(node==NULL||(node->left==NULL && node->right==NULL))return;
   int  
}
void print_tree(tree *node, int i)
{
     if(node==NULL)return;
     if(i==1)
     cout<<node->data<<" ";
     else
     {
     print_tree(node->left,i-1);
     print_tree(node->right,i-1);     
     }
}
int main()
{
    root=add_node(50);
  //  root->left=add_node(7);    
    root->right=add_node(2);
  //  root->left->left=add_node(3);
    //root->left->right=add_node(5);
    root->right->left=add_node(1);
    root->right->right=add_node(30);
    
    create_tree(root);
    for(int i=1;i<=3;i++)
    {
     print_tree(root,i);   
     cout<<endl;     
    }
    system("pause");
    return 0;    
}
