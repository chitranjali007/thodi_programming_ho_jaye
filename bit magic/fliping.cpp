#include<iostream>
#include<math.h>
using namespace std;
int ispower2(int n)
{
    int c=(n-1);
    if((n&(~(c)))==0)
    return 1;
    else
    return 0;    
    
}
int main()
{
    int t,c,d, siz;
    int n;
   scanf("%d",&t);   
   while(t--)
   {
             scanf("%d",&n);
             siz=(log(n)/log(2));
             if(ispower2(n))
             {
                     cout<<1<<endl;
                     continue;               
             }
            
            if(n%2==0)
            {
             cout<<siz;
             cout<<" ";
             
             for(int i=siz;i>siz/2;i--)
             {
                     c=1<<i;
                     d=1<<(siz-i);
                     if((((n&c)>0) && ((n&d)<=0))||(((n&c)<=0) && ((n&d)>0)))
                     {
                       n^=c;
                       n^=d;       
                     }        
             }   
             }
             cout<<n<<endl;       
   }
 
   system("pause");
    return 0;
    
}
