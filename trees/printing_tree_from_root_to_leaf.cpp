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
int a[100];
void print_tree(tree* node,int i)
{
     if(node==NULL)
     return;
     a[i]=node->data;
     i++;
     
     if(node->right==NULL && node->right==NULL)
     {
        for(int j=0;j<i;j++)
        cout<<a[j]<<" ";
        cout<<endl;
        return;                   
     }
     
     print_tree(node->left,i);
     print_tree(node->right,i);     
     
}
int main()
{
tree *root=add_node(1);
root->left=add_node(2);    
root->right=add_node(3);
root->left->left=add_node(4);
root->left->right=add_node(5);
print_tree(root,0);
system("pause");
return 0;    
}
