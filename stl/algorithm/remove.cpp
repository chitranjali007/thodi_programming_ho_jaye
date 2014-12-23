#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,8,0,4,9,7};
    vector<int> vec(&a[0],&a[11]);
    vector<int>::iterator it;
  remove(vec.begin(),vec.end(),2);
  for(it=vec.begin();it!=vec.end();it++)
  cout<<*it<<" ";  
system("pause");
return 0;    
}
