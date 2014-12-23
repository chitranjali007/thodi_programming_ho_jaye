#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int minAnd(int a[],int n,int k)
{
    if(n==0)
            return a[0];
    if(k>(n+1))
               return (1152921);
	if(k==0)
		return a[n+1];
     return min((a[n]& minAnd(a,n-1,k-1)),minAnd(a,n-1,k));    
    
}
int main()
{
    int t,n,k;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d%d",&n,&k);
              int a[n];
              for(int i=0;i<n;i++)
                      scanf("%d",&a[i]);
                cout<<minAnd(a,n-1,k)<<endl;               
    }
    
//system("pause");
return 0;    
}
