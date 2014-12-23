#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
 vector<int> vec(15);
 vector<int>::iterator it;
 copy(&a[0],&a[5],vec.begin());
 for( it=vec.begin();it!=vec.end();it++)
 cout<<*it<<" ";
system("pause");
return 0;    
}
