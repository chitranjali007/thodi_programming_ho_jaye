#include<cstdio>
#include<conio.h>
#include<malloc.h>
struct list{  
             int data;
             list *next;
             };

    
   
list *create(list *start)
{   char ch='y';int n;
      list *ptr1=(list *)malloc(sizeof(list));
      do 
      {
        if(start==NULL)
      {  
         start=(list *)malloc(sizeof(list));
         printf("\n enter data: ");
         scanf("%d",&n);
         start->data=n;
         start->next=NULL;
         
      }
      else
      
        
        {
          
           list *ptr2=(list *)malloc(sizeof(list));
             printf("\n enter data: ");
             scanf("%d",&n);  
             ptr2->data=n;
             ptr2->next=NULL;
           for(ptr1=start;ptr1->next!=NULL;ptr1=ptr1->next);
             ptr1->next=ptr2;     
            
                   
        }  
           printf("Want more(y/n): ");
             ch=getch();              
      }while(ch!='n');
      return(start);
}
list *reverse(struct list *start)
{
     list *fst,*sec,*trd;
     fst=(list *)malloc(sizeof(list));
     sec=(list *)malloc(sizeof(list));
     trd=(list *)malloc(sizeof(list));
     fst=NULL;
     sec=start;
     while(sec!=NULL)
     { 
       trd=sec->next;
       sec->next=fst;
       fst=sec;
       sec=trd;
                      
     }
     start=fst;
     return(start);
}
void disp(struct list *start)
{
       list *p=(list *)malloc(sizeof(list));
       for(p=start;p!=NULL;p=p->next)
       printf("%d ",p->data);
}

int main()
{    struct list *start=(list *)malloc(sizeof(list));
     start=NULL;
    start=create(start);
    disp(start);  
    printf("\n");
    start=reverse(start);
    disp(start); 
   getch();  
    return 0; 
    
}
