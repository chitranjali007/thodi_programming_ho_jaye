#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>::iterator it;
  int a[]={1,2,3,4,4,6,6,7,8,9} ;
  vector<int>vec(&a[0],&a[10]);
  //it=adjacent_find(vec.begin(),vec.end());
//  cout<<" "<<*it<<"\n";
  cout<<*adjacent_find(vec.begin(),vec.end());
  it++;
  it=adjacent_find(it,vec.end());
  cout<<" "<<*it<<"\n";
  it++;
  it=adjacent_find(it,vec.end()-1);
  cout<<" "<<*it<<"\n"; 
system("pause");
return 0;    
}
