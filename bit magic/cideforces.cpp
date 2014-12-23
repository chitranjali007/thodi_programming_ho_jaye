#include <iostream>
#include<cstdio>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
	int x,y,hi,lo;
	scanf("%d%d",&x,&y);
	
if((x==0) && (y!=0))
	{
		printf("%d %d\n",0,1);		
		printf("%d %d\n",0,y);
		printf("%d %d\n",0,0);		
		printf("%d %d\n",0,y-1);	
	}

else

	if((y==0) && (x!=0))
	{
		printf("%d %d\n",1,0);		
		printf("%d %d\n",x,0);
		printf("%d %d\n",0,0);		
		printf("%d %d\n",x-1,0);	
	}

else
{
pair<int,int>p1,p2,p3,p4;
p2=make_pair(0,0);
p3=make_pair(x,y);
double d=sqrt(x*x+y*y)*2+max(x,y);
 setprecision(8);
if((pow((x-1),2)+pow(y,2))>(pow((x),2)+pow(y-1,2)))
	{	p1=make_pair(x-1,y);
 		p4=make_pair(1,0);
	}
else
	{
		p1=make_pair(x,y-1);
		p4=make_pair(0,1);
	}
double d2=sqrt((p1.first)*(p1.first) + (p1.second)*(p1.second))+sqrt(x*x+y*y)+sqrt((x-p4.first)*(x-p4.first) + (y-p4.second)*(y-p4.second));
 setprecision(8);
 cout<<d<<" "<<d2;
if(d>d2)
{
		p1=make_pair(x,y);
		if(x>y)
			{
				p3=make_pair(x,0);
				p4=make_pair(0,y);
			}
		else
			{
				p3=make_pair(0,y);
				p4=make_pair(x,0);
			}

}
		printf("%d %d\n",p1.first,p1.second);
		printf("%d %d\n",p2.first,p2.second);		
		printf("%d %d\n",p3.first,p3.second);
		printf("%d %d\n",p4.first,p4.second);
}
     system("pause");
	return 0;
}
