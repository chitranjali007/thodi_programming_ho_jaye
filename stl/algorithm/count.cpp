#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[]={1,2,3,3,5,6,3,3,9,10};
   int n=count(&a[0],&a[10],4);
   cout<<"3 occured"<<n<<"times";
system("pause");
return 0;    
}
