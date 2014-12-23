/*
 quick sort-breaking the array into smaller pieces.... i.e.
*/


#include<iostream>
using namespace std;
void quicksort(int arr[],int first,int last)
{  
  int size=last+1;
  int high=last;
  int low=first;
  int pivot=arr[(first+last)/2];
  do
  {
    while(arr[low]<pivot)
    low++;
    while(arr[high]>pivot)
    high--;
    if(low<=high)
    {
      int temp=arr[high];
      arr[high]=arr[low];
      arr[low]=temp;             
      low++;
      high--;           
    }  
      
  }while(low<=high);     
  if(first<high)
  quicksort(arr,first,high);
  if(last>low)
  quicksort(arr,low,last);
   
}
int main()
{
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"\nenter elements: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    quicksort(arr,0,n-1);
     cout<<"\nsorted array:\n";
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
 
  system("pause");
return 0;    
}
