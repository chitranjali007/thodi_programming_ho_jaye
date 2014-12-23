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
   int flag=true;
    /*bubble sorting*/
    for(int pass=0;pass<n-1 && flag==true;pass++)
    {
      flag=false;
      for(int j=0;j<n-pass-1;j++)
      {
        if(arr[j]>arr[j+1])
        { flag=true;
          int temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;                   
                           
        }        
      }        
            
    }
    cout<<"\nsorted array is:\n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
    
system("pause");
return 0;    
}
