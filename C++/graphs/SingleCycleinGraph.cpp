#include<bits/stdc++.h>
 using namespace std;
 #define int long long
 #define double long double
 #define endl "\n"
 const double pi=3.141593;
 const int mod=1000000007;
 #define fast_io ios_base::sync_with_stdio(false)
 #define clr(a,x) memset(a,x,sizeof(a))
 #define T int t;cin>>t; while(t--)
 #define vll vector<int>
 #define v22 vactor<vector<double>>
 #define pb push_back
 #define lb lower_bound
 #define ub upper_bound
 #define b_s binary_search
 #define ff first
 #define ss second
 #define str to_string
 #define intt stoll
 #define sv(x) sort(x.begin(),x.end())
 #define all(x) x.begin(),x.end()
 #define vp vector<pair<int,int>>
 vector<int> adj[200001];
 int dx[]={0,0,1,-1};
 int dy[]={1,-1,0,0};
 string ds="RLDU";
 int par[100001]={0};
 int visited[100001]={0};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) 
{ 
    return (a.second > b.second); 
} 
void isc(int node, int p)
{
    par[node]=p;
    visited[node]=1;
    for(auto i:adj[node])
    {
        if(visited[i]==0) isc(i,node);
        else if(i!=p)
         {
         vll a;
         int cur=node;
         a.pb(node);
         while(par[cur]!=i)
         {
             cur=par[cur];
             a.pb(cur);
         }
         a.pb(i);
         a.pb(node);
         cout<<a.size()<<endl;
         for(auto i:a)
         cout<<i<<" ";
         exit(0);
         }
    }
}
 int32_t main()
 {
int n,m,u,v; cin>>n>>m;
for(int i=0;i<m;i++)
{
    cin>>u>>v;
    adj[u].pb(v);
    adj[v].pb(u);
}
for(int i=1;i<=n;i++)
{
    if(visited[i]==0)
    isc(i,-1);
}
cout<<"IMPOSSIBLE"<<endl;
 }
