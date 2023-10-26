//count the connected component in graph....using bfs and dfs

#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[] , int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

//counting using bfs

void bfs2(vector<int>adj[] , int s , vector<bool>&visited){
    visited[s]=true;
    queue<int>q;
    q.push(s);
    
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(auto u : adj[x]){
            if(visited[u]==false){
                visited[u]=true;
                q.push(u);
                
            }
        }

    }

}
void bfs(vector<int>adj[] , int V){
    vector<bool>visited(V , 0);
    int count=0;
    for(int i = 0 ; i<V ; i++){
        if(visited[i]==false){
            
            bfs2(adj , i , visited);
            count++;
        }
    }
    cout<<count<<endl;
}

// counting using dfs

void dfsrec(vector<int>adj[] , int s , vector<bool>&visited){
    visited[s]=true;
    for(auto x : adj[s]){
        if(visited[x]==false){
            dfsrec(adj , x , visited);
        }
    }
}
void dfs(vector<int>adj[] , int V){
    vector<bool>visited(V , 0);
    int count = 0 ; 
    for(int i =0 ; i<V ; i++){
        if(visited[i]==false){
            dfsrec(adj , i , visited);
            count++;
        }
    }
    cout<<count<<endl;
}
int main(){
    int V=5;
    vector<int>adj[V];
    addEdge(adj , 0 , 1);
    addEdge(adj , 1 , 2);
    addEdge(adj , 2 , 0);
    addEdge(adj , 3 , 4);
    bfs(adj , V);
    dfs(adj , V);
    return 0;
}