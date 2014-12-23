#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
   int a[]={5,10,15,20,25};
   int b[]={10,20,30,40,50};
   vector<int> vec(10);
   set_intersection(&a[0],&a[5],&b[0],&b[5],vec.begin());
   for(vector <int>::iterator it=vec.begin();it!=vec.end();it++)
   cout<<*it<<" ";  
system("pause");
return 0;    
}
