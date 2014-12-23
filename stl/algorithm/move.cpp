#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int main()
{    int a[]={1,2,3,4,5,6,8,7};
     vector <int> vec(a,a+8);
     vector <int> vec1(10);
     move (vec.begin(),vec.begin()+5,vec1.begin());
     cout<<vec.size()<<" "<<vec1.size();

system("pause");
return 0;    
}
