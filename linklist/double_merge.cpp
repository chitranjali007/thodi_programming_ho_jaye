#include<cstdio>
#include<conio.h>
#include<malloc.h>
struct dlist
{
  int data;
  dlist *right;
  dlist *left;       
       
};
struct doublelist
     {  
        dlist *fnode; 
        dlist *lnode;
     };
void createlist(doublelist *dblist)
{  int n;char ch;
   dlist *p=(dlist *)malloc(sizeof(dlist));
   printf("\nenter n: ");
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
void merge(doublelist *list1,doublelist *list2)
{
  list1->lnode->right=list2->fnode;
  list2->fnode->left=list1->lnode;
  list1->lnode=list2->lnode;
  free(list2);    
     
}
void disp(doublelist *list1)
{  dlist *p;
  for(p=list1->fnode;p!=NULL;p=p->right)
  printf("%d ",p->data);     
     
}
int main()
{
    doublelist *list1,*list2;
    list1=(doublelist *)malloc(sizeof(doublelist));
    list2=(doublelist *)malloc(sizeof(doublelist));
    printf("\ncreating first list!!!");
    createlist(list1);
    printf("\ncreateing second list!!!");
    createlist(list2);
    printf("\nmerging two lists!!!");
    merge(list1,list2);
    disp(list1);
    getch();
    return 0;
    
    
}
