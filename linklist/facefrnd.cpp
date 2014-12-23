#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct frnd{
            int data;
         frnd *next;
       };
frnd *add(frnd *start,frnd *p,int n)
{
     if(start==NULL)
      {start=(frnd *)malloc(sizeof(frnd));
       start->data=n;
       start->next=NULL;
      }
      else
      {  p=(frnd *)malloc(sizeof(frnd));
         p->data=n;
         p->next=start;
         start=p;
         
      }
     return start;
     }
void deletep(frnd *start,int pos)
{
     int i;frnd *ptr1,*ptr2;
     ptr1=(struct frnd *)malloc(sizeof(frnd));  
     ptr2=(struct frnd *)malloc(sizeof(frnd));   
     ptr1=start;
     ptr2=start->next;
     for(i=2;i<pos;i++)
     {
       if(ptr2==NULL)
       {
        break;
       }      
       else
       {
         ptr1=ptr1->next;
         ptr2=ptr2->next;  
       }          
     }
    
     
     {
         ptr1->next=ptr2->next;
         free(ptr2);
     }
     
     }
int main()
{    
     frnd *start=NULL,*p;frnd *q;
       int t,pos,frnd,nof,fof,i,count=0,a[25];
       
      scanf("%d",&t);
      for(i=0;i<t;i++)
      {
        scanf("%d",&a[i]);
        scanf("%d",&nof);
         count+=nof;
        for(;nof>0;nof--)
        {
          scanf("%d",&fof);
          start=add(start,p,fof);
        }
        
                   
      }
     for(i=0;i<t;i++)
     {  
           if(start->data==a[i])
           {
              p=(struct frnd *)malloc(sizeof(frnd));
             start=start->next;
             p=start;
             free(p);                
           }   
          else
          { p=(struct frnd *)malloc(sizeof(frnd));
          for(pos=2,p=start->next;p!=NULL;p=p->next,pos++)
          {
            if(p->data==a[i])
            deletep(start,pos);                                
          }      
      }
}
      for(i=0;i<t;i++)
       printf("%d ",a[i]); 
      for(p=start;p!=NULL;p=p->next)
      printf("%d ",p->data);
      getch();
      return 0;   
    
    }       
