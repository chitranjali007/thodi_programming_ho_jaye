#include<iostream>
#include<iomanip>
#include<cstdio>
#include<malloc.h>

using namespace std;
struct tree{
       char data;
       struct tree *right;
       struct tree *left;
       
       };
struct tree* add_node(char d)
{
       struct tree *node=(struct tree*)malloc(sizeof(struct tree));
       node->data=d;
       node->right=NULL;
       node->left=NULL;       
       return node;
}
void create_tree(tree* node,int j,char st[])
{
        if(j==strlen(st))return;
         if(node->left==NULL)
         {
                             if(st[j]=='l')
                             {
                             node->left=add_node('l'); 
                             j++; 
                            // return;          
                             }      
                             else
                             {
                                 node->left=add_node('n');  
                                 create_tree(node->left,j+1,st); 
                             }              
         }
         if(node->right==NULL)
         {
                             if(st[j]=='l')
                             {
                             node->right=add_node('l');  
                             j++;
                             return;          
                             }      
                             else
                             {
                                 node->right=add_node('n');  
                                 create_tree(node->right,j+1,st); 
                             }              
         }
}
void print(tree * node)
{
if(node==NULL)
return;
cout<<node->data;
print(node->left);
print(node->right);     
}
int main()
{
  char st[]="nnnllnnllnllnll";
  int i=0;
  struct tree* root=add_node(st[0]);
  create_tree(root,i+1,st);
  print(root);
    system("pause");
    return 0;    
}
