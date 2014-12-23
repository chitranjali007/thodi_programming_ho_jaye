
#include<iostream>
using namespace std;
int main()
{
   
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"\nenter elements: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    // selection sort
    //*********************************************

    for(int i=n-1;i>0;i--)
    {    int max=arr[0];
    int maxindex=0;
      for(int j=1;j<=i;j++)
      {
        if(arr[j]>max)
        {
          max=arr[j];
          maxindex=j;              
        }        
      }        
      arr[maxindex]=arr[i];
      arr[i]=max;
    }
    cout<<"\nsorted array is:\n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
     
    
system("pause");
return 0;    
}
