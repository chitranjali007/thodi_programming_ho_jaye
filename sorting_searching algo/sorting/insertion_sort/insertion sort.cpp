#include<iostream>
using namespace std;
int main()
{
      int n,j,k;
    cout<<"enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"\nenter elements: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
/*******Insertion sorting**********************/
for(int i=1;i<n;i++)
{  k=arr[i];
for(j=i-1;j>=0&&k<arr[j];j--)
   arr[j+1]=arr[j];
   arr[j+1]=k;

}
cout<<"\nsorted array is:\n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
system("pause");
return 0;    
}
