#include<cstdio>
#include<malloc.h>
struct list{
       int data;
       list *next;
       };
       
void create(list *start)
{      int n;
       list *lst;
       list *p=(list *)malloc(sizeof(list));
       printf("\n enter data: ");
       scanf("%d",&n);
       p->data=n;
       start=p;
       lst=p;
       lst->next=start;
       
}
int main()
{
  list *start;
  create(start);    
  system("pause");
  return 0;
} 
