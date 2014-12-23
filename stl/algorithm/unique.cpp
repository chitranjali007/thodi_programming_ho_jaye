#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
   int a[]={5,5,5,10,10,20,30,30,10};
   vector<int> vec(&a[0],&a[9]);
   vector<int>::iterator it=unique(vec.begin(),vec.end());
   vec.resize(it-vec.begin());
   for(it=vec.begin();it!=vec.end();it++)
   cout<<*it<<" ";
   
system("pause");
return 0;    
}
