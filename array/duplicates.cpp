#include<stdio.h>
#include<stdlib.h>
int deletenum(int *arr,int position, int num)
{
    if(position==(num-1))
     {
       num=num-1;
                            
     }
     else
     {
         for(int i=position;i<(num-1);i++)
           {arr[i]=arr[i+1];
            }
            num=num-1;         
         }
         return num;
    
    }
int main()
{
    int arr[25],noe,t;
    printf("\n enter the number of element less than or equal to 25: ");
        scanf("%d",&noe);
        printf("\n enter %d elements: ",noe);
        for(int i=0;i<noe;i++)
        scanf("%d",&arr[i]);
        for(int i=0;i<noe;i++)
        {for(int j=i-1;j>=0&&i<noe;j--)
        {
                if(arr[i]==arr[j])
                {
                  noe=deletenum(arr,i,noe);  
                  j=i;
                }
        }
        }
        printf("\n req... array : ");
        for(int i=0;i<noe;i++)
        printf("%d ",arr[i]);
        system("pause");
        return 0;
        
        
    }
