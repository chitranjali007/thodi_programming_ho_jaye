#include<iostream>
using namespace std;
int main()
{
int a=29;
for(int i=(sizeof(int)*8-1);i>=0;i--)
{
        int c=1<<i;
        if((a&c))        
           cout<<1;
           else
           cout<<0;
}    
    system("pause");
    return 0;
    
}
