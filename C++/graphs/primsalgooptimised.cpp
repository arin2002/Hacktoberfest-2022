/*use of min-heap for keeping track of nxt min wt and its corresponding vertex*/

#include<bits/stdc++.h>
using namespace std;

//undirected+weighted graph
void addEdge(vector<pair<int, int>>adj[] , int u , int v , int wt){
    adj[u].push_back({v , wt});
    adj[v].push_back({u , wt});
}
void prims(vector<pair<int , int>>adj[] , int V){
    vector<int>dist(V , INT_MAX);
    vector<int>parent(V , -1);
    vector<bool>mstSet(V , 0);

    dist[0]=0;
    parent[0]=-1;
    priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>>pq;
    //pq->min wt , vertex
    pq.push({0 , 0});

    for(int count =0 ; count<V-1 ; count++){

        int u = pq.top().second;
        pq.pop();

        mstSet[u]=true;
        for(auto x : adj[u]){
            int v = x.first;
            int wt = x.second;
            if(mstSet[v]==false && wt<dist[v]){
                dist[v]=wt;
                parent[v]=u;
                pq.push({wt , v});
            }
        }

    }
    for(int i =1 ; i<V ; i++){
        cout<<parent[i]<<"-"<<i<<endl;
    }


}

int main(){
    int V =5;
	vector<pair<int , int>>adj[V];
	addEdge(adj , 0 , 3 , 6);
	addEdge(adj , 0 , 1 , 2);
	addEdge(adj , 1 , 2 , 3);
	addEdge(adj , 3 , 1 , 8);
	addEdge(adj , 1 , 4 , 5);
	addEdge(adj , 4 , 2 , 7);
	prims(adj , V);
	return 0;
}

