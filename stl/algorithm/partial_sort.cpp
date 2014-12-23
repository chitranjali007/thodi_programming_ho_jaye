#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int main()
{    int a[]={1,8,2,5,4,5,6,3,2,1};
     vector <int> vec(a,a+8);
     vector <int> vec1(10);
     partial_sort(&a[0],&a[5],&a[10]);
    for(int i=0;i<10;i++)
    cout<<a[i]<<" ";

system("pause");
return 0;    
}
