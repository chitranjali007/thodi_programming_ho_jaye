#include<iostream>
#include<algorithm>
#include<cstdio>
#include<bitset>
using namespace std;

int main()
{
    int t,n,k;
    bitset<(sizeof(int)*8)> b;
    scanf("%d",&n);
     int a[n];
      for(int i=0;i<n;i++)
{
              scanf("%d",&a[i]);
} 
           int flag=0;
           
              for(int i=((sizeof(int)*8)-1);i>=0;i--)
              {
                      vector<int> c;
                      for(int j=0;j<n;j++)
                      {
                              b=a[j];
                              if(b[i]==1)
                              {
                                        c.push_back(a[j]);
                                        if(c.size()==2)
                                            {
                                                    flag=1;
                                                    break;           
                                            }                
                              }
                                      
                      }        
              }
                
              if(flag==1)
              {
               int i=c.back();
               c.push_back();
               int j=c.back();
               cout<<(i&j);        
               }
               else
               cout<<"not found";
    
//system("pause");
return 0;    
}
