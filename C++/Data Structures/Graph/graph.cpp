#include <bits/stdc++.h>
#include"graph.h"
using namespace std;

int main() {
    Graph<int>* g = new Graph<int>(5);
    // 1 1 2 2 3 1 3 4 3 2 2 4 4 2 2 3 5 0
    // 1.5 1 2.5 2.5 3 1.5 3.5 4.5 3.5 2 2.5 4.5 4.5 2 2.5 3.5 5.5 0
    g->inputGraph();
    cout<<endl<<"-------------DFS---------------------"<<endl;
    g->dfs();
    g->addEdge(1, 4);
    cout<<endl<<"-------------BFS---------------------"<<endl;
    g->bfs(1);
    cout<<endl<<"----------------------------------"<<endl;
    for(auto node : g->graph)
    {
        cout<<node.first<<" -> ";
        for(auto child : g->graph[node.first])
        {
            cout<<child<<" ";
        }
        cout<<endl;
    }
    vector<vector<int>> components = g->components();
    cout<<"no of commponents : "<<components.size()<<endl;
    cout<<endl<<"----------------------------------"<<endl;
    for(auto comp : components)
    {
        cout<<"[ ";
        for(auto c : comp)
        {
            cout<<c<<", ";
        }
        cout<<" ]"<<endl;
    }

    cout<<endl<<"----------------------------------"<<endl;
    cout<<"loop exist : "<<g->ioopExists()<<endl;
    return 0;
}