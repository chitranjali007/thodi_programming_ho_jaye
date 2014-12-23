#include<cstring>
#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int tree[100]={0};
void update(int i, int diff,int ind,int strt,int end)
{
	if(i>=strt && i<=end)
	tree[ind]=tree[ind]+diff;
	
	if(i<strt || i>end) return;
	if(strt!=end)
	{
	
		int mid=(strt+end)/2;
		update(i,diff,2*ind+1,strt,mid);
		update(i,diff,2*ind+2,mid+1,end);
}
	
}
int getsum(int ind,int strt,int end,int i,int j)
{
	  
	if(strt>=i && end<=j)
	{
	//	cout<<tree[ind];
		return tree[ind];
	}
	if(end<i || strt>j) return 0;
	
	
		int mid=(strt+end)/2;
		return getsum(2*ind+1,strt,mid,i,j)+
		      getsum(2*ind+2,mid+1,end,i,j);
	
	
	
}
int const_tree(int arr[],int i,int j,int ind)
{
	if(i==j)
	{
		tree[ind]=arr[i];
		return tree[ind];
	}
	int mid=(i+j)/2;
	tree[ind]=const_tree(arr,i,mid,2*ind+1) + const_tree(arr,mid+1,j,2*ind+2);
	return tree[ind];
	
}

int main()
{
   int arr[]={1,3,5,7,9,11};
   int size=sizeof(arr)/sizeof(int);
   //cout<<size<<" ";
   double x=(ceil)(log2(size));
   int tsize=2*(pow(2,x))-1;
   
   const_tree(arr,0,size-1,0);
   for(int i=0;i<size;i++) cout<<arr[i]<<" "<<endl;
   for(int i=0;i<tsize;i++) cout<<tree[i]<<" ";
   cout<<endl;
   int i=2,j=5;
   cout<<getsum(0,0,size-1,2,5)<<endl;
   int diff=10-arr[5];
   arr[5]=diff;
   update(5,diff,0,0,size-1);
    for(int i=0;i<tsize;i++) cout<<tree[i]<<" ";
    system("pause");
    return 0;
}
