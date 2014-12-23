#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct list{  
             int data;
             list *next;
            };
list* insertBeg(list *start)
  {   
  list *ptr=(list *)malloc(sizeof(struct list));
     int n;
    printf("\n enter n: ");
    scanf("%d",&n); 
    ptr->data=n;

    ptr->next=start;
    start=ptr;
    return start;
    }
void insertEnd(struct list *start,struct list *ptr1,struct list *ptr2)
{    int n;
     printf("\n enter n: ");
    scanf("%d",&n); 
    ptr2->data=n;
    ptr2->next=NULL;
    ptr1=start;
     while(ptr1->next!=NULL)
     {
       ptr1=ptr1->next;
     }
     ptr1->next=ptr2;
     
     }
void insertBet(struct list *start,struct list *ptr1,struct list *ptr2,int pos)
{  
      int n,i,flag=0;
        printf("\n enter n: ");
        scanf("%d",&n); 
        ptr2->data=n;
        ptr2->next=NULL;
        ptr1=start;
        
     
         for(i=2;i<pos;i++)
      { 
        if(ptr1->next==NULL) 
        {flag=1;
         break;
         }
         else
         ptr1=ptr1->next;  
      }
     if(flag==1)
     {
       printf("\n cannot add to last node!!!");
     }
     else
     {  ptr2->next=ptr1->next;
         ptr1->next=ptr2;
         
     }
     
}
list* deletefnode(struct list *start,struct list *ptr)
 {  if(start->next==NULL)
     free(start);
     else
    {    ptr=start;
         start=start->next;
          free(ptr);
    }  
    return start;  
     }
void deletelnode(struct list *start,struct list *ptr)
{     if(start->next==NULL)
     free(start);
     else
     {
       ptr=start;
       while(ptr->next->next!=NULL)
       {
         ptr=ptr->next;                           
        }
       free(ptr->next);
       ptr->next=NULL;
       
     }
     
}
void deletebenode(struct list *start,struct list *ptr1,struct list *ptr2)
{
     int pos,flag=0,i;
         printf("\n enter the position u wanna enter this node: ");
      scanf("%d",&pos);
      
     ptr1=start;
     ptr2=start->next;
     for(i=2;i<pos;i++)
     {
       if(ptr2==NULL)
       {flag=1;
        break;
       }      
       else
       {
         ptr1=ptr1->next;
         ptr2=ptr2->next;  
       }          
     }
     if(flag==1)
     printf("\n press option 4 to delete last node!!!");
     else
     {
         ptr1->next=ptr2->next;
         free(ptr2);
     }
}
void searchele(struct list *start,struct list *ptr)
{
       int ele,i=1;
       printf("\n enter element to search: ");
       scanf("%d",&ele);
       ptr=start;
       while(ptr!=NULL)
       {
         if(ptr->data==ele)
         {
           printf("\n element found at %dth position!!",i);
           
         }                
         i++;
         ptr=ptr->next;
       }
     
}

void sort(list *start,list *ptr1,list *ptr2)
{
   ptr1=start;
   
   int t;
   for(;ptr1!=NULL;ptr1=ptr1->next)
   {
      for(ptr2=ptr1->next;ptr2!=NULL;ptr2=ptr2->next)
     if(ptr1->data>ptr2->data)
     {
       t=ptr1->data;
       ptr1->data=ptr2->data;
       ptr2->data=t;
     }
     
   }      
   
     
}
void merge(list *start1,list *start2)
{
  list *ptr=(list *)malloc(sizeof(list));
  if(start1==NULL)
  {
    start1=start2;
    return;              
  }
  if(start2==NULL)
  return;
  else
  ptr=start1;
  while(ptr->next!=NULL)
  ptr=ptr->next;
  ptr->next=start2;
}
void disp(struct list *start)
{
  struct list *ptr=(struct list *)malloc(sizeof(struct list)); 
  ptr=start;
  while(ptr!=NULL)
  {
          printf("%d ",ptr->data);
          ptr=ptr->next;        
  }     
}
int main()
{ int ch,n;char ch1='y',pos;char che;
   list *ptr1,*ptr2,*start;
      start=(list *)malloc(sizeof(list));
      printf("\n enter n: ");
      scanf("%d",&n);
      start->data=n;
      start->next=NULL;
      
      while(1)   { 
                  ptr1=(list *)malloc(sizeof(list));
                  ptr2=(list *)malloc(sizeof(list));
          printf("\n 1->INSERT LINKLIST AT THE BEGINING.\n 2-> INSERT LINKLIST AT THE END.\n 3->INSERT LINKLIST IN BETWEEN TWO NODES.\n 4->DELETE FIRST NODE.\n 5->DELETE LAST NODE.\n 6->DELETE NODE BETWEEN TWO NODES.\n 7->SEARCHING ELEMENT.\n 8->DISPLAYING NODES.\n ENTER YOUR CHOICE:\n 9->EXIT\n 10->SORTING DATAS\n 11->MERGING. ");
                     scanf("%d",&ch);
                     switch(ch)
                     {case 1 :start=insertBeg(start);
                              break;
                      case 2 :insertEnd(start,ptr1,ptr2);
                              break;
                      case 3 :
                            printf("\n enter the position u wanna enter this node: ");
                            scanf("%d",&pos);
                            if(pos<=0)
                            printf("Invalid position\n");
                            else if(pos==1)
                            start=insertBeg(start);
                            else
                           insertBet(start,ptr1,ptr2,pos);
                              break;
                      case 4 :start=deletefnode(start,ptr1);
                              break;    
                      case 5 : deletelnode(start,ptr1);
                              break;
                      case 6 : deletebenode(start,ptr1,ptr2);
                              break;                          
                      case 7 :   searchele(start,ptr1);
                              break;
                      case 8 :  disp(start);
                              break; 
                       case 9: 
                               exit(1);
                       case 10: sort(start,ptr1,ptr2);
                                 break;
                       case 11:
                                struct list *start1=(list *)malloc(sizeof(list));
                                struct list *start2=(list *)malloc(sizeof(list));
                                  
                                printf("\n creating first linklist....");
                                while(1)
                                {
                                  printf("do you wanna enter data(y/n): ");
                                che=getch();
                                if(che=='n')
                                break;
                                else
                                start1=insertBeg(start1);
                                }
                                
                                printf("\n creating second linklist....");
                                while(1)
                                {
                                printf("Do you wanna enter data(y/n): ");
                                che=getch();
                                if(che=='n')
                                break;
                                else
                                start2=insertBeg(start2);
                                }
                                printf("\n merging both linklists....");
                                merge(start1,start2);      
                                printf("\n merged linklist is....\n");
                                disp(start1);   
                                break;  
                                      
                     }
                     
        
    }
    getch();
    return 0;
    
    }
