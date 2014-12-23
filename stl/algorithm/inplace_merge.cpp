#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int a[]={1,9,8,3,5,2,9,8,2,5};
   sort(&a[0],&a[4]);
   sort(&a[5],&a[9]);
   
   
   inplace_merge(&a[0],&a[4],&a[9]);
   for(int i=0;i<10;i++)
   cout<<a[i]<<" ";
   system("pause");
return 0;    
}
