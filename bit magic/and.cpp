#include<iostream>
using namespace std;
int main()
{
    int m,n,p,q,c,s=0;
    scanf("%d%d",&n,&m);
    int a[n][n];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)    
    a[i][j]=0;
    for(int i=1;i<=m;i++)
    {
            scanf("%d%d",&p,&q);
            a[p-1][q-1]=1;        
    }
    for(int i=0;i<n-1;i++)
    {
                for(int j=i+1;j<n;j++)
                {          c=0;
                          for(int k=0;k<n;k++)
                          {
                                                    if(a[i][k]==1 && a[j][k]==1)        
                                                                  {
                                                                     c++;
                                                                     if(c==2)
                                                                     {
                                                                             c=0;
                                                                             s++;  
                                                                             break;      
                                                                     }                     
                                                                  }
                          }  
                }        
    }
    cout<<s<<endl;
system("pause");
return 0;;    
}
