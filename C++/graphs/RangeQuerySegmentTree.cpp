#include<bits/stdc++.h>
 using namespace std;
 #define int long long
 #define double long double
 #define endl "\n"
 const double pi=3.141593;
 const int mod=1e9+7;
 #define fast_io ios_base::sync_with_stdio(false)
 #define clr(a,x) memset(a,x,sizeof(a))
 #define T double t;cin>>t; while(t--)
 #define vll vector<int>
 #define vp vector<pair<int,int>> 
 vector<int> adj[500001];
 typedef pair<int, int> pairs;
 int q=0;
 struct data{
     int sum,pre,suf,ans;
 };
  data t[4*100];
 data combine(data p, data q)
 {
     data res;
     res.sum=p.sum+q.sum;
     res.pre=max(p.pre,p.sum+q.pre);
     res.suf=max(q.suf,q.sum+p.suf);
     res.ans=max(max(p.ans,q.ans),p.suf+q.pre);
     return res;
 }
 data make_data(int n)
 {
     data res;
     res.sum=n;
     res.pre=res.suf=res.ans=max(q,n);
     return res;
 }
  void build(vector<int> a,int v, int tl, int tr)
  {
      if(tl==tr)
      t[v]=make_data(a[tl]);
      else 
      {
          int tm=(tl+tr)/2;
          build(a,2*v,tl,tm);
          build(a,2*v+1,tm+1,tr);
          t[v]=combine(t[2*v],t[2*v+1]);
      }
  }
void update(int v, int tl, int tr, int pos, int nval)
{
    if(tl==tr)
    t[v]=make_data(nval);
    else 
    {
        int tm=(tl+tr)/2;
        if(pos<=tm)
        update(2*v,tl,tm,pos,nval);
        else 
        update(2*v+1,tm+1,tr,pos,nval);
        t[v]=combine(t[2*v],t[2*v+1]);
    }
}
data query(int v,int tl, int tr, int l, int r)
{
    if(l>r)
    return make_data(0);
    if(l==tl  && r==tr)
    return t[v];
    int tm=(tl+tr)/2;
    return combine(query(v*2,tl,tm,l,min(tm,r)),query(2*v+1,tm+1,tr,max(tm+1,l),r));
}
 int32_t main()
 {
    int n,q,x,pos,nval,l,r;
    cin>>n>>q;
    vll a(n); for(int i=0;i<n;i++)   cin>>a[i];
    build(a,1,0,n-1);
    while(q--)
    {
        cin>>x;
        if(x==1)
        {
            cin>>pos>>nval;
            pos--;
            update(1,0,n-1,pos,nval);
        }
        else 
        {
            cin>>l>>r;
            l--,r--;
            data s=query(1,0,n-1,l,r);
            cout<<s.ans<<endl;
        }
    }
 }