#include<iostream>
using namespace std;

int ic_comp(char *s1,char *s2)
{
    for(int i=0;s1[i] && s2[i];i++)
    {
            if(s1[i]!=s2[i])
            {
                      if((s1[i]^32) != s2[i])
                      {
                          if((s1[i]|32) < (s2[i]|32))
                          return -1;
                          else
                          return 1;
                      }               
            }        
    }    
    return 0;
}

int main()
{  
    cout<<ic_comp("GeeksForGeeks","geeksforgeeks")<<endl;
    cout<<ic_comp("GeeksForGeeks","geaksforgeeks")<<endl;    
    cout<<ic_comp("GeaksForGeeks","geeksforgeeks")<<endl;
system("pause");
return 0;
}
