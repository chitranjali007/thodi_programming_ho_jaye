#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
     fill(&a[0],&a[5],0);
     for(int i=0;i<10;i++)
     cout<<a[i];
system("pause");
return 0;    
}
