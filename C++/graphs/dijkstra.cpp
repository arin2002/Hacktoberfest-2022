/*dijkstra is for weighted graph ->given source ->shortest distance from source to all other vertices
->concept of relaxation(dist[v])<dist[u]+wt(u,v)->dist[v]=dist[u]+wt(u , v))
->dikstra algo can work for both directed and non directed graph+cyclic
->drwaback ->negative edge*/

#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int , int>>adj[] , int u , int v , int wt){
    adj[u].push_back({v , wt});
    adj[v].push_back({u , wt});
}

void dijkstra(vector<pair<int, int>>adj[] , int V  , int s){
    //min heap declaration
    priority_queue<pair<int , int>  , vector<pair<int , int>> , greater<pair<int , int>>>pq;
    vector<int>dist(V , INT_MAX);
    dist[s]=0;
    pq.push({0 , s});//pq (dist , source)
    while(!pq.empty()){
        int d = pq.top().first;
        int v = pq.top().second;
        pq.pop();
        for(auto x : adj[v]){
            int u = x.first;//in adjacency list (v , wt )insertion .
            int wt = x.second;
            if(dist[u]>dist[v]+wt){
                dist[u]=dist[v]+wt;
                pq.push({dist[u] , u});
            }
        }
    }
    for(int i =0 ; i<V ; i++){
        cout<<s<<"-"<<i<<"-"<<dist[i]<<endl;
    }
    cout<<endl;
}



int main(){
    int V=5;
    vector<pair<int , int>>adj[V];
    addEdge(adj , 0 , 1, 2);
    addEdge(adj , 1 , 4 , 5);
    addEdge(adj , 4 , 2 , 1);
    addEdge(adj , 2 , 3 , 3);
    addEdge(adj , 3 , 0 , 1);
    addEdge(adj , 1 , 2, 4);
    dijkstra(adj , V , 0);
    return 0;
}