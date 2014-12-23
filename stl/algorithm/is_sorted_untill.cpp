#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{    int a[]={1,2,3,4,5,6,8,7};
     vector <int> vec(a,a+8);
     vector <int>::iterator it;
  it=std::is_sorted_until(vec.begin(),vec.end());

system("pause");
return 0;    
}
