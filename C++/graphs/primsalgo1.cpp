/*prims algo -> mst->MST-subgraph of graph having all vertices of the graph but n-1 edges , so that there is no cycle formed by edges and graph must me connected
prims:greedy algo ->> select a minimum cost edge from the graph 
                 -->select the minimu cost edge that is already connected to the selected edge such that  it doesnt form cycle

 data struct use-->
 dist array ->initiazed to inf (keeps the track min wt)
 parent array ->initialised to -1(stores the parent vertex for the corresponding index vertex)    
 mstSet->bool->false(keeps a track if a particular vertex is part of mst or not) 
*/

#include<bits/stdc++.h>
using namespace std;


//non directed + weighted graph
void addEdge(vector<pair<int, int>>adj[] , int u , int v , int wt){
    adj[u].push_back({v , wt});
    adj[v].push_back({u , wt});
}

//prims-algo->how vertex are liked in mst
void prims(vector<pair<int , int>>adj[] , int V){
    vector<int>dist(V , INT_MAX);
    vector<int>parent(V , -1);
    vector<bool>mstSet(V , 0);
    //taking source vertex as 0
    dist[0]=0;
    parent[0]=-1;

    for(int count =0 ; count<V-1 ; count++){
        int min = INT_MAX;
        int u;
        for(int i =0 ; i<V ; i++){
            if(mstSet[i]==false && dist[i]<min){
                min = dist[i];
                u = i;
            }
        }
        //including vertex in mst
        mstSet[u]=true;

        for(auto x : adj[u]){
            int v = x.first;
            int wt = x.second;
            if(mstSet[v]==0 && wt<dist[v]){
                dist[v]=wt;
                parent[v]=u;
            }
        }

    }
    for(int i=1 ; i<V ; i++){
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