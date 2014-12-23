#include<iostream>
using namespace std;
int bsearch(int arr[],int low,int high,int ele)
{ 
 if(low>high)
 return -1;
 int mid=(low+high)/2;
 if(ele==arr[mid])
 return mid;
 else
 if(ele>arr[mid])
 bsearch(arr,mid+1,high,ele);
 else
 bsearch(arr,low,mid-1,ele);
}
int main()
{
   int n,ele,i;
   cout<<"enter the size of array:";
   cin>>n;
   int arr[n];
   cout<<"\n enter elements:";
   for(int i=0;i<n;i++)
   cin>>arr[i];
   cout<<"\n enter the elements to be searched: ";
   cin>>ele;   
   int low=0;
   int high=n-1;
   //searching ele.....
   int flag=bsearch(arr,low,high,ele);
   if(flag==-1)
   cout<<"\nNOT FOUND!!";
   else
   cout<<"\n found at "<<flag+1<<"th position";
system("pause");
return 0;    
}
