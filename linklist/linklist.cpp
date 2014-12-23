#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct list
  {
       int data;
       
       struct list *next;
       
  };
  struct list *start,*p,*q;
void insert(int n)
{  p =(struct list*)malloc(sizeof(struct list));
   p->data=n;
   p->next=NULL;
   q->next=p;
   q=p;

   }
void display()
{    q=start;
     while(q!=NULL)
     {
        printf("%d ",q->data);
        q=q->next;                         
                         
     }
}
int main()
{
    int n;char ch='y';
    
    printf("enter n: ");
    scanf("%d",&n);
    start=(struct list *)malloc(sizeof(struct list));
    q=(struct list *)malloc(sizeof(struct list));
    start->data=n;
    start->next=NULL;
    q=start;
    while(ch=='y')
    {printf("\n enter n: ");
    scanf("%d",&n);
    insert(n);
    printf("\ndo you want more:y/n: ");
    ch=getch();
    }
    display();
    getch();
    return 0;
    
    }  
