#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int b[]={1,2,3,4,9,6};
    if(equal(&a[0],&a[5],&b[0]))
    cout<<"equal";
    else
    cout<<"not equal";
system("pause");
return 0;    
}
