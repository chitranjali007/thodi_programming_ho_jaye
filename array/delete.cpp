#include<stdio.h>
#include<stdlib.h>
int deletenum(int *a,int position, int num)
{
    if(position==(num-1))
     {
       num=num-1;
                            
     }
     else
     {
         for(int i=position;i<(num-1);i++)
           {a[i]=a[i+1];
            }
          num=num-1;        
         }
     return num;
    
    }
    void search(int *a,int number,int ele)
    {  int flag=0;
         for(int i=0;i<number;i++)
          {  
            if(a[i]==ele)
            { number=deletenum(a,i,number);
                            
               flag=1;
               i=0;
            }
            
          }
          if(flag==0)
          printf("\n element not found!!");
          else
          printf("\n required array is: ");
          for(int i=0;i<number;i++)
          printf("%d ",a[i]);
          
    }
    int main()
    {
        int a[25],ele,noe;
        printf("\n enter the number of element less than or equal to 25: ");
        scanf("%d",&noe);
        printf("\n enter %d elements: ",noe);
        for(int i=0;i<noe;i++)
        scanf("%d",&a[i]);
        printf("\n enter the element to be deleted: ");
        scanf("%d",&ele);
        search(a,noe,ele);
        system("pause");
        return 0;
        
        }
