//shortest path in unweighted graph..weight of every edge is assumed to  be 1
//in undirected grph->>->>no. of edges should be minimum

#include<bits/stdc++.h>
using namespace std;
//undirected graph
void addEdge(vector<int>adj[] , int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

vector<int>shortdistance(vector<int>adj[] , int s, int V){
    vector<int>dist(V , INT_MAX);
    dist[s]=0;
    vector<bool>visited(V , 0);
    queue<int>q;
    visited[s]=true;
    q.push(s);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(auto u : adj[x]){
           if(visited[u]==false){
               dist[u]=dist[x]+1;
               visited[u]=true;
               q.push(u);
           }
        }
    }
    return dist;
}
int main(){
    int V=4;
    vector<int>adj[V];
    addEdge(adj , 0 ,1);
    addEdge(adj , 0 , 2);
    addEdge(adj , 1 , 2);
    addEdge(adj , 2 , 3);
    addEdge(adj , 1 , 3);
    vector<int>v;
    v=shortdistance(adj , 0 , V);
    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}