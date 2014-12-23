#include<iostream>
#include<iomanip.h>
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
int max_ht(struct tree* node)
{
       if(node==NULL)
       return 0;
       else
       return (max(max_ht(node->left),max_ht(node->right))+1);    
    
}
int main()
{
    struct tree *root=add_node(1);
    root->left=add_node(2);
    root->right=add_node(3);
    root->left->left=add_node(4);
    root->left->left->right=add_node(5);
    //<<root->data<<" "<<root->left->data<<" "<<root->right->data;
    int mxht=max_ht(root);
    cout<<mxht;
system("pause");
return 0;    
}
