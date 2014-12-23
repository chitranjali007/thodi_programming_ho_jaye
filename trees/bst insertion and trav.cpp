#include<iostream>
#include<stdlib.h>
using namespace std;
struct tree{
         int data;
         struct tree *lchild;
         struct tree *rchild;
       };
struct tree *root;

// INSERTION*****************************************
tree *insert(tree *root, int n)
{tree *tmp,*parent,*ptr;
  parent=(tree *)malloc(sizeof(tree));
  ptr=(tree *)malloc(sizeof(tree));
  tmp=(tree *)malloc(sizeof(tree)) ;
      tmp->data=n;
      tmp->lchild=NULL;
      tmp->rchild=NULL;
  ptr=root;
  if(root==NULL)
   root=tmp;
   else
   while(ptr!=NULL)
   { parent=ptr;
      if(n==ptr->data)
      {
        cout<<"\n sorry duplicate nodes cant be inserted!!!:))";
         return root;               
      } 
      else
      if(n<ptr->data)
      ptr=ptr->lchild;
      else
      ptr=ptr->rchild;        
            
   }   
   if(n<parent->data)
   parent->lchild=tmp;
   else
   parent->rchild=tmp;  
   return root;  
}
//*************** PREORDER TRAVERSAL***********************
void preorder_trav(tree *ptr)
{
  if(ptr==NULL)
  
    
    return;           
  
  else
  cout<<ptr->data<<" ";
  preorder_trav(ptr->lchild);
  preorder_trav(ptr->rchild);
}
//***********INORDER TRAVERSAL***************
void inorder_trav(tree *ptr)
{
  if(ptr==NULL)
  
    return ;
   
  else
  {
   inorder_trav(ptr->lchild);
   cout<<"\n"<<ptr->data<<" ";   
   inorder_trav(ptr->rchild);
  }     
}
//***************POSTORDER TRAVERSAL************
void postorder_trav(tree *ptr)
{
  if(ptr==NULL)
  {
    return ;
   }
   else
   postorder_trav(ptr->lchild);
   postorder_trav(ptr->rchild);
   cout<<"\n"<<ptr->data<<" ";   
}
//*********DELETION********************

tree *min_right( tree *ptr1)
{
	tree *minright=ptr1->rchild;
	while(minright->lchild!=NULL)
		minright=minright->lchild;
	
	return minright;
}

tree *delete_node(tree *root, int ele)
{
    if(root==NULL) 
	return NULL;
    if(ele<root->data)
    root->lchild=delete_node(root->lchild,ele);
    else
    if(ele>root->data)
    root->rchild=delete_node(root->rchild,ele);
    else                                   //delete the inorder successor of root...
    {
    	struct tree* tmp=NULL;
    	
    
		if(root->lchild==NULL)
    	 {
    	 	 tmp= root->rchild;
    	 	delete(root);
    	 	return tmp;
    	 	
    	 }
		if(root->rchild==NULL)
    	 {
    	 	tmp= root->lchild;
    	 	delete(root);
    	 	return tmp;
    	 	
    	 }
    	 else
    	 {
    	 	tmp=min_right(root);
    	 	root->data=tmp->data;
    	 	root->rchild=delete_node(root->rchild,root->data);
    	 }
    	 
    }
    return root;
     
}
//**************MAIN******************
int main()
{
    int n,choice,m;char ch;
    root=(tree *)malloc(sizeof(tree));
    root=NULL;
while(1)
{
cout<<"\n1.INSERT\n2.PREORDER TRAVERSAL\n3.INORSER TRAVERSAL\n4.POSTORDER TRAVERSAL\n5.DELETE\n6.EXIT\nENTRE YOUR CHOICE :";
cin>>choice;
switch(choice)
{
 case 1:cout<<"\n enter data: ";
         cin>>n;
         root=insert(root,n);
         break;
 case 2:preorder_trav(root);
        break;
 case 3:inorder_trav(root);
         break;
 case 4:postorder_trav(root);
        break;
 case 5:cout<<"\n enter the node to be deleted: ";
         cin>>m;
         root=delete_node(root,m);     
         break;
  case 6: exit(0);       
}
}
system("pause");
return 0;
    
}
