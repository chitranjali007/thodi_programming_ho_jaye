#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{    int a[]={1,2,3,4,5,6,8,7};
     vector <int> vec(90,99);
    iter_swap(&a[0],vec.begin());
     cout<<a[0]<<" "<<*vec.begin();

system("pause");
return 0;    
}
