#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
random_shuffle(&a[0],&a[5]);
    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
    string b="abcdefg";
random_shuffle(&b[0],&b[7]);  
cout<<"\n"<<b;  
system("pause");
return 0;    
}
