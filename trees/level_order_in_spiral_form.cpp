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

void create_tree(tree * node)
{    int diff=0,left_data=0,right_data=0;
    if(node==NULL || node->left==NULL && node->right==NULL) return;
     create_tree(node->left);
     create_tree(node->right);
      if(node->left!=NULL)
            left_data=node->left->data;
    if(node->right!=NULL)
            right_data=node->right->data;
     diff=(left_data+right_data)-node->data;
    if(diff>0)
    {
              node->data+=diff;    
              return;      
    }
    if(diff<0)
    {
              if(node->left!=NULL)
              node->left->data+=abs(diff);
              else
              node->right->data+=abs(diff);
              return(create_tree(node));
    }
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
