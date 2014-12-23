#include<iostream>
using namespace std;
int adlsearch(int arr[],int m,int ele)
{ int i;
  arr[m]=ele;
  for( i=0;arr[i]!=ele;i++);
  if(i>=m)
  return -1;
  else
  return i;
}
int main()
{
   int n,ele,i;
   cout<<"enter the size of array:";
   cin>>n;
   int arr[n+1];
   cout<<"\n enter elements:";
   for(int i=0;i<n;i++)
   cin>>arr[i];
   cout<<"\n enter the elements to be searched: ";
   cin>>ele;   
   //searching ele.....
   int flag=adlsearch(arr,n+1,ele);
   if(flag==-1)
   cout<<"\nNOT FOUND!!";
   else
   cout<<"\n found at "<<flag+1<<"th position";
system("pause");
return 0;    
}
