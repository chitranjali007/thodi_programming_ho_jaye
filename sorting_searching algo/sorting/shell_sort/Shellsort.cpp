#include<iostream>
using namespace std;
void shellsort(int a[],int n,int incr)
{
     int i,j;
  for(;incr>=1;incr-=2)
  {
    for(i=incr;i<n;i+=incr)
    {
      for(j=i-incr;j>=0;j-=incr)
      {
        if(a[j]>a[j+incr])
        {
          int temp=a[j];
          a[j]=a[j+incr];
          a[j+incr]=temp;                  
        }                          
      }
    }                    
  }     
     
}

int main()
{
    int n,incr;
    cout<<"enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"\nenter elements: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"\n enter incr value:";
    cin>>incr;
    shellsort(arr,n,incr);
     cout<<"\nsorted array:\n";
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
 
  system("pause");
return 0;    
}
