#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{    int a[]={1,2,3,4,5,6,8,7};
     cout<<*lower_bound(&a[0],&a[8],9);

system("pause");
return 0;    
}
