#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
void dfs(int x,vector<bool> &visi,vector<int> &ansdfs,vector<int>adj[])
{
    ansdfs.push_back(x);
    visi[x]=true;
    for(auto it: adj[x]){
        if(!visi[it]){
            dfs(it,visi,ansdfs,adj);
        }
    }
}
vector<int>dfsOfGraph(int V,vector<int>adj[])
{
    vector<int>ansdfs;
    vector<bool>visi(V+1,false);
    for(int i=1;i<V+1;i++){
        if(!visi[i]){
            dfs(i,visi,ansdfs,adj);
        }
    }
    return ansdfs;
}

vector<int>bfsOfGraph(int V,vector<int>adj[])
{
    vector<int>bfs;
    vector<bool>visi(V+1,false);
    for(int i=1;i<V+1;i++){
        if(visi[i]==false){
            queue<int>q;
            q.push(i);
            visi[i]=true;
            while(!q.empty()){
                int x=q.front();
                q.pop();
                bfs.push_back(x);
                for(auto it:adj[x]){
                    if(!visi[it]){
                        q.push(it);
                        visi[it]=true;
                    }
                }
            }
        }
    }
    return bfs;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>x;
    x=bfsOfGraph(n,adj);
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    vector<int>y;
    y=dfsOfGraph(n,adj);
    for(int i=0;i<y.size();i++){
        cout<<y[i]<<" ";
    }
    cout<<endl;


    return 0;
}
