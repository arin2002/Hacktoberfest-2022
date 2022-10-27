/*topological sort concept to find shortest path
->initialze distance array as inf
->dist from source =0
->for every vertex in toposort , relaxation of every adjacent vertex
 relaxation -> if(dist[v]>dist[u]+wt(u , v))->
                  dist[v]= dist[u]+wt(u , v);*/

#include<bits/stdc++.h>
using namespace std;

//for directed graph
void addEdge(vector<pair<int, int>>adj[] , int u , int v , int wt){
adj[u].push_back({v , wt});
}


void dfsrec( vector<pair<int , int>>adj[] , int s , vector<bool>&visited , stack<int>&st){
    visited[s]=1;
    for(auto x : adj[s] ){
    int t = x.first;
    if(visited[t]==0){
        dfsrec(adj , t , visited , st);
    }
    }
    st.push(s);
}

vector<int> toposort(vector<pair<int,int>>adj[] ,int V ){
    vector<int>v;
    vector<bool>visited(V , 0);
    stack<int> st ;
    for(int i =0 ; i<V ; i++){
        if(visited[i]==0){
            dfsrec( adj , i , visited , st);
        }
    }
    while(!st.empty()){
        int y = st.top();
        st.pop();
        v.push_back(y);
    }
    return v;
}

vector<int> shortest_path(vector<pair<int , int>>adj[] , int V , int s){
    vector<int>dist(V , INT_MAX);
    dist[s]=0;
    vector<int>topo;
    topo = toposort(adj , V);
    for(auto u : topo){
        for(auto v : adj[u]){
            if(dist[v.first] > dist[u]+ v.second){
                dist[v.first] = dist[u]+ v.second;
            }

        }
    }
    return dist;
}


int main(){
    int V =6;
    vector<pair<int , int>>adj[V];
    addEdge(adj , 0 , 1 , 2);
    addEdge(adj , 1 , 2, 3);
    addEdge(adj , 2, 3 , 6);
    addEdge(adj , 0 , 1 , 2);
    addEdge(adj , 0 , 4 , 1);
    addEdge(adj , 4 , 5 , 4);
    addEdge(adj , 5, 3 , 1);
    addEdge(adj , 4 , 2 , 2);
    vector<int>v;
    v = shortest_path(adj , V , 0);
    for(auto x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}