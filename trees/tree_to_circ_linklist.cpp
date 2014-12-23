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
struct tree* append(tree* small,tree* large)
{
       if(small==NULL)return large;
       if(large==NULL) return small;
       small->right=large;
       large->left=small;
       return large;
       
return node;       
}
struct tree* make_list(tree* node)
{
       if(node==NULL)return NULL;
       tree *prev,*next;
       
       prev=make_list(node->left);
       next=make_list(node->right);
       
       node->left=node;
       node->right=node;
       
       prev=append(prev,node);
       prev=append(prev,next);
       
       return (prev);
}
int main()
{
tree *root=add_node(4);
root->left=add_node(2);    
root->right=add_node(5);
root->left->left=add_node(1);
root->left->right=add_node(3);

tree *node=make_list(root);

for(int i=0;i<4;i++)
{
                cout<<node->data;
                node=node->right;
}
system("pause");
return 0;    
}
