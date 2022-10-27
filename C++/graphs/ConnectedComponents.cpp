#include<bits/stdc++.h>
 using namespace std;
 #define int  long long
 #define endl "\n"
vector<int> adj[200001];
int vis[200001]={0};
int c=0;
void dfs(int v){
    vis[v]=1;
    for(auto i:adj[v]){
        if(vis[v]==0){
            dfs(i);
        }
    }
}
int32_t main(){
  int n,m; 
  cin>>n; //number of vertices
  cin>>m; //number of edges
  for(int i=0;i<n;i++){
      int x,y; 
      cin>>x>>y;
      adj[x].push_back(y);
      adj[y].push_back(x);
  }


 for(int i=1;i<=n;i++){
     if(vis[i]==0){
         dfs(i);
         c++;
     }
 }
cout<<"Number of Connected Components are "<<c;
  
}