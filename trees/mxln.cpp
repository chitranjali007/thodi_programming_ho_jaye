#include<iostream>
#include<iomanip.h>
using namespace std;

int main()
{
    int a,n,mxlen=0,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
            scanf("%d",&a);
            if(a>0)
            {
                    c++;        
            }
            else
            {
                if(c>=mxlen)
                mxlen=c;
                c=0;
                    
            }
    }
    printf("%d\n",mxlen);
       
system("pause");
return 0;    
}
