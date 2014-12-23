#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={1,6,3,9,7,8,2,7,5};
    int b[5];
    partial_sort_copy(&a[0],&a[9],&b[0],&b[5]);
    for(int i=0;i<5;i++)
    cout<<b[i]<<" ";
system("pause");
return 0;    
}
