#include<iostream>
#include<iomanip>
#include<cstdio>
#include<malloc.h>
#include<stack>
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


void in_trav(tree *node)
{
     stack<struct tree*> st;
     st.push(node);
     struct tree* cur=node;
     while(!st.empty())
     {          
              cur=st.top();
                 if(cur->left!=NULL)
                 {
                      st.push(cur->left);
                      cur=cur->left;
                 }
                 else
                 {
                     cout<<st.top()->data;
                     st.pop();
                     if(cur->right!=NULL)
                     {
                     st.push(cur->right);
                     cur=cur->right;
                     }
                         
                 }
                                   
     }
}
int main()
{
    root=add_node(50);
  root->left=add_node(7);    
    root->right=add_node(2);
    root->left->left=add_node(3);
    root->left->right=add_node(5);
    root->right->left=add_node(1);
    root->right->right=add_node(30);
    
    in_trav(root);
    
    system("pause");
    return 0;    
}
