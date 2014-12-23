    #include <iostream>
    #include <stdio.h>
    #include <string.h>
    #include <vector>
    #include <math.h>
    #include <algorithm>
    using namespace std;
    vector<long long int> g1[100005],g2[100005];
    int position=0;
    long long int noe[100010]={0};
    long long int mapping(int u, long long int pos[])
    {
    if(pos[u]>0)
    return 0;
    pos[u]=++position;
    int count=0;
    for(int i=0;i<g1[u].size();i++)
    {
    if(pos[g1[u][i]]==0)
    {
    count+=mapping(g1[u][i],pos);;
    }
    }
    noe[u]=count;
    return ++count;
    }
    long long int create_tree(unsigned long long int tree[],int ind,int strt,int end,long long int map_wt[])
    {
    if(strt==end)
    {
    tree[ind]=map_wt[strt];
    return tree[ind];
    }
    int mid=(strt+end)/2;
    tree[ind]=create_tree(tree,2*ind,strt,mid,map_wt)+create_tree(tree, 2*ind+1,mid+1,end,map_wt);
    return tree[ind];
    }
    void update(int ind, int strt,int end,unsigned long long int tree[],int u,long long int val)
    {
    if(u<strt || u>end) return;
    tree[ind]+=val;
    if(strt!=end)
    {
    int mid=(strt+end)/2;
    update(2*ind,strt,mid,tree,u,val);
    update(2*ind+1,mid+1,end,tree,u,val);
    }
    }
    long long int get(int qs,int qe,unsigned long long int tree[],int ss,int se,int ind)
    {
    if(ss>=qs && se<=qe) return tree[ind];
    if(se<qs || ss>qe) return 0;
    int mid=(ss+se)/2;
    return(get(qs,qe,tree,ss,mid,2*ind)+get(qs,qe,tree,mid+1,se,2*ind+1)
    );
    }
    int main() {
    int n,q,a,b;
    long long int pos[100010]={0},vis;
    scanf("%d%d",&n,&q);
    long long int wt[n+5];
    long long int tsize=(ceil)(log2(n));
    tsize=2*pow(2,tsize)-1;
    unsigned long long int tree[tsize+100];
    for(long long int i=0;i<=tsize;i++) tree[i]=0;
    for(int i=1;i<=n;i++)
    scanf("%lld",&wt[i]);
    int k=n-1;
    while(k--)
    {
    scanf("%d%d",&a,&b);
    g1[a].push_back(b);
    g1[b].push_back(a);
    }
    // cout<<"**************"<<endl;
    // for(int i=1;i<=n;i++)
    // {
    // for(int j=0;j<g1[i].size();j++)
    // cout<<g1[i][j]<<" ";
    // cout<<endl;
    // }
    mapping(1,pos);
    long long int map_wt[100010]={0};
    for(int i=1;i<=n;i++)
    map_wt[pos[i]]=wt[i];
    //for(int i=1;i<=n;i++) cout<<pos[i]<<" ";
    // cout<<endl;
    // for(int i=1;i<=n;i++) cout<<map_wt[i]<<" ";
    // cout<<endl;
    // for(int i=1;i<=n;i++) cout<<noe[i]<<" ";
    // cout<<endl;
    create_tree(tree,1,1,n,map_wt);
    //for(int i=1;i<=tsize;i++) cout<<tree[i]<<" ";
    // cout<<endl;
    char ch; int x,y;
    while(q--)
    {
    cin>>ch>>x;
    if(ch=='Q')
    {
    cout<<get(pos[x],pos[x]+noe[x],tree,1,n,1)<<endl;
    }
    else
    {
    scanf("%d",&y);
    long long int prev=y-map_wt[pos[x]];
    update(1,1,n,tree,pos[x],prev);
    map_wt[pos[x]]=y;
    }
    }
     
    // system("pause");
    return 0;
    } 
