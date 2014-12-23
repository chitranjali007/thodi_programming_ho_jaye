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
int main()
{
    struct tree *root=add_node(1);
    root->left=add_node(2);
    root->right=add_node(3);
    cout<<root->data<<" "<<root->left->data<<" "<<root->right->data;
    
system("pause");
return 0;    
}
