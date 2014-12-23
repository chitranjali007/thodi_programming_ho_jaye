#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int a[]={10,20,20,20,40,50,30,60,70,80,20};
    vector<int> vec(&a[0],&a[11]);
    vector<int>::iterator it;
  replace(vec.begin(),vec.end(),20,100);
  for(it=vec.begin();it!=vec.end();it++)
  cout<<*it<<" ";  
system("pause");
return 0;    
}
