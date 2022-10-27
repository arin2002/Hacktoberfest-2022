#include<bits/stdc++.h>
using namespace std;

//undirected graph
void addEdge(vector<int>adj[] , int v , int u){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
//directed graph
void addEdge2(vector<int>adj[] , int v , int u){
    adj[u].push_back(v);
}

//print graph
void printgraph(vector<int>adj[] , int V){
    for(int i =0 ; i<V ;i++){
        cout<<i<<"->";
        for(auto x : adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

//weighted graph undirected 
void addEdge3(vector<pair<int , int>>adj[] , int u , int v , int wt){
    adj[u].push_back({v , wt});
    adj[v].push_back({u , wt});
}

//weighted directed graph
void addEdge4(vector<pair<int , int>>adj[] , int u , int v , int wt){
    adj[u].push_back({v , wt});
}

//printing weighted graph

void printWgraph(vector<pair<int , int>>adj[] , int V){
    for(int i = 0 ; i<V ; i++){
        cout<<i<<"->";
        for(auto x : adj[i]){
            cout<<x.first<<"("<<x.second<<")"<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int V=4;
    vector<int>adj[V];
    vector<pair<int , int>>adj2[V];

    addEdge(adj , 0 , 1);
    addEdge(adj , 0 , 2);
    addEdge(adj , 1 , 2);
    addEdge(adj , 1 , 3);
    printgraph(adj , V);

    addEdge3(adj2 , 0 , 1 , 10 );
    addEdge3(adj2 , 0 , 2 ,5);
    addEdge3(adj2 , 1 , 2 , 7);
    addEdge3(adj2 , 1 , 3 , 11);
    printWgraph(adj2 , V);
    return 0;

}