#include<iostream>
using namespace std;
void mergesort(int a[],int n)
{
 int size,aux[n],i,j,k,l1,l2,u1,u2;
 for(size=1;size<n;size*=2)
 {for(l1=0,k=0;l1+size<n;l1=u2+1)
 {
   u1=l1+size-1;
   l2=l1+size;
   u2=(l2+size-1<n)?(l2+size-1):n-1;
   for(i=l1,j=l2;i<=u1&&j<=u2;k++)
   {
     if(a[i]<a[j])
     aux[k]=a[i++];
     else
     aux[k]=a[j++];                               
   }               
   while(i<=u1)
   aux[k++]=a[i++];
   while(j<=u2)
   aux[k++]=a[j++];                
}
 for(i=l1;i<n;i++)
 aux[i]=a[i];

 for(i=0;i<n;i++)
 a[i]=aux[i];

}
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
    mergesort(arr,n);
     cout<<"\nsorted array:\n";
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
 
  system("pause");
return 0;    
}
