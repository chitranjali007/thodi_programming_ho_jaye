#include<cstdio>
#include<conio.h>
#include<malloc.h>
struct dlist
    {
      int data;
      dlist *left;
      dlist *right;        
    };
struct doublelist
    {
      dlist *fnode;
      dlist *lnode;         
    };

void createlist(doublelist *dblist)
{  int n;char ch;
   dlist *p=(dlist *)malloc(sizeof(dlist));
   printf("enter n: ");
   scanf("%d",&n);
   p->data=n;
   p->left=NULL;
   p->right=NULL;
   dblist->fnode=p;
   dblist->lnode=p;
   do
   {
     dlist *p=(dlist *)malloc(sizeof(dlist));
     printf("\n enter n: ");
     scanf("%d",&n);
     p->data=n;  
     p->right=NULL;
     p->left=dblist->lnode;
     p->left->right=p;
     dblist->lnode=p;   
     printf("want more(y/n): ");
     ch=getch();           
                   
   }while(ch!='n');
   
     
}
void disp(doublelist *dblist)
{
     dlist *p=(dlist *)malloc(sizeof(dlist));
     for(p=dblist->fnode;p!=NULL;p=p->right)
     printf("%d ",p->data);
      
}
void in_fnode(doublelist *dblist)
{
     int n;
     dlist *p=(dlist *)malloc(sizeof(dlist));
     
     printf("Enter data: ");
       scanf("%d",&n);
       p->data=n;
       p->right=dblist->fnode;
       p->right->left=p;
       p->left=NULL;
       dblist->fnode=p;
       
}
void in_lnode(doublelist *dblist)
{   int n;
  dlist *p=(dlist *)malloc(sizeof(dlist));
  printf("\n enter data: ");
  scanf("%d",&n);
  p->data=n;
  p->right=NULL;
  p->left=dblist->lnode;
  p->left->right=p;
  dblist->lnode=p;
      
}
void in_bnode(doublelist *dblist,int pos)
{  int n,c;
  dlist *p=(dlist *)malloc(sizeof(dlist));
  dlist *q=(dlist *)malloc(sizeof(dlist));
  printf("enter data: ");
  scanf("%d",&n);
  p->data=n;
  for(q=dblist->fnode,c=1;c<(pos-1)&&q!=NULL;c++,q=q->right);
      if(q==NULL)
      printf("OUT OF BOUND!!!");
      else
      {
       p->right=q->right;
       p->right->left=p;
       p->left=q;
       q->right=p;
       }
       
}
void delete_fnode(doublelist *dblist)
{
    dlist *p;
    p=dblist->fnode;
    dblist->fnode=dblist->fnode->right;
    dblist->fnode->left=NULL;
    free(p);
}
void delete_lnode(doublelist *dblist)
{
  dlist *p;
  p=dblist->lnode;
  dblist->lnode=dblist->lnode->left;
  dblist->lnode->right=NULL;
  free(p);    
     
}
int size(doublelist *dblist)
{ 
  int i=1;
  dlist *p;
  for(p=dblist->fnode;p!=dblist->lnode;p=p->right,i++);
  return i;    
    
}
void delete_bnode(doublelist *dblist,int pos)
{      
       int n;
       dlist *p,*q;
       p=dblist->fnode;
       q=dblist->fnode->right;
       for(int i=2;i<pos;i++)
      { p=p->right;
        q=q->right;
      }
       p->right=q->right;
       q->right->left=p;
       free(q);
      /* for(int i=1;i<pos;i++)  //giving garbage value!!!!!!!!!!!!!!!!!!!!!
       p=p->right;
       p->left=p->right;
       p->right=p->left;
       free(p);*/  
}
void reverse(doublelist *dblist)
{
  dlist *p;
  for(p=dblist->lnode;p!=NULL;p=p->left)
    printf("%d ",p->data);     
     
     
}
int main()
{  
    char ch;int n;
   doublelist *dblist=(doublelist *)malloc(sizeof(doublelist));
   createlist(dblist);
   
   while(1)
   {
    printf("\n1>Displaying \n2>Insert before firstnode. \n3>Insert after lastnode. \n4>Insert between nodes. \n5>EXIT\n6>Delete front node.\n7>Delte last node.\n8>Delete node in between two.\n 9>Reverse link list.\n ENTER CHOICE: ");   
    scanf("%d",&n);
    switch(n)
    {
      case 1 :disp(dblist);
               break;
      case 2 :in_fnode(dblist);
               break;
               
      case 3 :in_lnode(dblist);
               break;
      case 4 :int pos;
              printf("enter position to insert: ");
              scanf("%d",&pos);
              if(pos<0)
              printf("\n INVALLID POSITION!!");
              else if(pos==1)
                in_fnode(dblist);
              else
             in_bnode(dblist,pos);        
             break;
      case 5 :exit(1); 
      case 6 :delete_fnode(dblist);
              break;
      case 7: delete_lnode(dblist);
               break;
      case 8: {printf("\n enter position to delete: ");// here we are using {} with switch as it will restrict "flag" toonly within case :8 
              scanf("%d",&pos);                       //otherwise it will give "jump to case..." error!!!!
              int flag=(pos>1&&pos<size(dblist))?1:0;
              if(flag==1)
               delete_bnode(dblist,pos);
               else
               printf("Invalid position!!");
               }
               break;
      case 9: reverse(dblist);
               break;
     default: break;
    }
   
   
  }
   getch();
   return 0;
    
}
