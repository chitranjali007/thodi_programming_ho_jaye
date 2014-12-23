#include<iostream>
using namespace std;

int main()
{
    int k,r,m,s;
    scanf("%d%d",&k,&r);
    scanf("%d",&m);
    int pos[m][2];
    for(int i=0;i<m;i++)
    scanf("%d%d",&pos[i][0],&pos[i][1]);
     scanf("%d",&s);
    int ppl[m][3];
    for(int i=0;i<m;i++)
    scanf("%d%d%d",&ppl[i][0],&ppl[i][1],&ppl[i][2]);
    sort_by_third(&ppl);
system("pause");
return 0;    
}
