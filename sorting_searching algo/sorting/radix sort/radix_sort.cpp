#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct list{
       int info;
       struct list *next;
       }*start=NULL;
      
 int getPlaceAt(int num,int pos)
 {
    char ch[50];
    if(sprintf(ch,"%d",num)<pos)
                                return 0;
     for(int i=1;i<pos;i++)
     {
             num/=10;        
     }     
     return (num%10);
     
 }
void radSort(int mxln)

{
     struct list *front[10],*rear[10],*p;
    
     for(int pc=1;pc<=mxln;pc++)
     {
              for(int i=0;i<10;i++)
     {
            front[i]=NULL;
            rear[i]=NULL;            
     }
             cout<<"for "<<pc<<"th position:"<<endl;
                     for(p=start;p!=NULL;p=p->next)
                     {
                                      int dig=getPlaceAt(p->info,pc);
                                      cout<<dig<<" "  ; 
                                      if(front[dig]==NULL)
                                                        front[dig]=p;
                                       else
                                       rear[dig]->next=p;
                                       rear[dig]=p;                           
                     }
                     //merging starts here...
                     int i=0;
                     while(front[i]==NULL)
                     i++;
                     start=front[i];
                     while(i<9)
                    {
                                 if(rear[i+1]!=NULL)
                                 rear[i]->next=front[i+1];
                                 else
                                 rear[i+1]=rear[i];
                                 i++;
                                 
                    }   
                    rear[9]->next=NULL;          
     }
     
    return;      
}


int main()
{
    int n,num,maxlen=0,len;
    struct list *p,*q;char ch[50];
    cout<<"how many elements??: ";
    scanf("%d",&n);
    cout<<"enter"<<n<<"numbers: ";
    for(int i=0;i<n;i++)
    {
             scanf("%d",&num);
             len=sprintf(ch,"%d",num);
             if(len>maxlen)
             maxlen=len;
             
             q=(struct list *)malloc(sizeof(struct list));
                                    q->info=num;            
                                    q->next=NULL;
                                    if(start==NULL)
                                    	start=q;
                                    	else
                                    	{
             								p=start;
           									while(p->next!=NULL)
                                 			{
                                          		p=p->next;              
                                 			}
                                    		p->next=q;
                                    	}
            
    }
    cout<<"without sorting: ";
     p=start;
    while(p!=NULL)
    {
                  cout<<p->info<<" ";
                  p=p->next;              
    }
    
    cout<<"\nsorted list is:"<<endl<<maxlen<<endl;
    radSort(maxlen);
    cout<<"mmmm";
    p=start;
    while(p!=NULL)
    {
                  cout<<p->info<<" ";
                  p=p->next;              
    }
    
system("pause");
return 0;
}
