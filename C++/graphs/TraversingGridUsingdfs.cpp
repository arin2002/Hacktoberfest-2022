#include<bits/stdc++.h>
 using namespace std;
 #define double long double
 #define endl "\n"
 const double pi=3.141593;
 const int mod=1000000007;
 const int INF=1e15;
 #define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 #define clr(a,x) memset(a,x,sizeof(a))
 #define T int t;cin>>t;while(t--)
 #define vll vector<int>
 #define sv(x) sort(x.begin(),x.end())
 #define all(x) x.begin(),x.end()
 #define vp vector<pair<int,int>>
 int dx[]={0,0,1,-1};
 int dy[]={1,-1,0,0};
 string ds="RLDU";
const int nax=1e5+5;
 string s[nax];
 int vis[1001][1001]={0},n,m,k,p=0,ans;
 int par[100001]={0};
 void visit(int x,int y)
 {
   if(x<0 || y<0 || x>=n || y>=m) return ;
   if(s[x][y]=='*'){ans++; return;}
   if(vis[x][y]!=0) return;
    vis[x][y]=p;
     for(int i=0;i<4;i++)
     {
       int X=x+dx[i];
       int Y=y+dy[i];
       visit(X,Y);
     }
   return;
 }
 int main()
{
FAST;
  cin>>n>>m>>k;
  for(int i=0;i<n;i++)  cin>>s[i];
  while(k--)
  {
    int l,r;  cin>>l>>r;
    l--,r--;
    ans=0;
    p++;
   if(!vis[l][r]) visit(l,r);
   else ans=par[vis[l][r]];
    par[p]=ans;
    cout<<ans<<endl;
   }
}
