#include<iostream>
#include<conio.h>
using namespace std;
int *insert(int a[])
{
  for(int i=0;i<10;i++)
  cin>>a[i];
  return a;    
    
}
int main()
{
int a[10];
int *p;
p=insert(a);
for(int i=0;i<10;i++)
cout<<p+i;
return 0;
getch();    
}
