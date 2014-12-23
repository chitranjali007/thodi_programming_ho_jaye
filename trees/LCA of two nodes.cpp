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

struct tree* lca(tree* node,int n1,int n2)
{
      if(node==NULL)
           return(NULL);
     if((node->data>n1) && (node->data>n2))
           return(lca(node->left,n1,n2));
     if((node->data<n1) && (node->data<n2))
           return(lca(node->right,n1,n2));
     if((node->data >=n1) && (node->data <= n2))
                   return(node);
}
int main()
{
tree *root=add_node(20);
root->left=add_node(8);    
root->right=add_node(22);
root->left->left=add_node(4);
root->left->right=add_node(12);
root->left->right->left=add_node(10);
root->left->right->right=add_node(14);
int n1,n2;
printf("enter two nodes: ");
scanf("%d%d",&n1,&n2);
struct tree *node=(struct tree*)malloc(sizeof(struct tree));
node=lca(root,max(n1,n2),min(n1,n2));
cout<<node->data;

system("pause");
return 0;    
}
