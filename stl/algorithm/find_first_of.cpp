#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   string s1="this is me";
   string s2="jk";
    cout<<*find_first_of(&s1[0],&s1[9],&s2[0],&s2[2]);
system("pause");
return 0;    
}
