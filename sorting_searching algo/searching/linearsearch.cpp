#include<iostream>
using namespace std;
int lsearch(int arr[],int n,int ele)
{  int i;
  for(i=0;i<n;i++)
  {if(arr[i]==ele)
  return(i);
}
return(-1);
      
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
   //searching ele.....
   int flag=lsearch(arr,n,ele);
   if(flag==-1)
   cout<<"\nNOT FOUND!!";
   else
   cout<<"\n found at "<<flag+1<<"th position";
system("pause");
return 0;    
}
