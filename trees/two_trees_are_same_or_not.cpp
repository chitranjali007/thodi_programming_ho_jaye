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
int match(struct tree *t1,struct tree *t2)
{
    if(t1==NULL && t2==NULL)
    return 1;
    
      if(t1!=NULL && t2!=NULL)
        {if(t1->data==t2->data)
        {
                    return(match(t1->left,t2->left)&&match(t1->right,t2->right));                      
        }
        }    
      
    else
        return 0;
}
int main()
{
    struct tree *root=add_node(1);
    root->left=add_node(2);
    root->right=add_node(3);
    cout<<root->data<<" "<<root->left->data<<" "<<root->right->data;
    cout<<endl;
    struct tree *root1=add_node(1);
    root1->left=add_node(2);
    //root1->right=add_node(3);
    if(match(root,root1))
    cout<<"same";
    else
    cout<<"not same";
    
system("pause");
return 0;    
}
