#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct list{
             int data;
             list *next;
       
           };
void *create(list *start)
{      
       int n;char ch;
       list *ptr1,*ptr2;
       start=(list *)malloc(sizeof(list));
       printf("\n enter data: ");
       scanf("%d",&n);
       start->data=n;
       ptr1=(list *)malloc(sizeof(list));
       
       ptr1=start;
       while(true)
       {
       printf("\n enter data: ");
       scanf("%d",&n);
       ptr2=(list *)malloc(sizeof(list));
       ptr2->data=n;
       ptr2->next=NULL;
       ptr1->next=ptr2;
       ptr1=ptr2;
        printf("\nwant more(y/n): ");
        scanf("%c",&ch);
        if(ch=='n')
        break;
             
       }
       
       
}
void *merge(list *start1,list *start2)
{
     list *current=(list *)malloc(sizeof(list));
     current=start1;
     while(current->next!=NULL)
     {
         current=current->next;                
     }
     current->next=start2;
     
}
void display(list *start)
{
  list *ptr=(list *)malloc(sizeof(list));
  ptr=start;
  while(ptr!=NULL)
  {
    printf("%d ",ptr->data);
  }   
}

int main()
{
 list *start1,*start2;
 
 printf("\n creating first linklist....");
 start1=create(start1);
  printf("\n creating second linklist....");
 start2=create(start2);
  printf("\n merging both linklists....");
 start1=merge(start1,start2);      
 printf("\n merged linklist is....\n");
 display(start1);
 getch();
 return 0;
    
}
