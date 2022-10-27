//Made By: Vishesh Gupta(Pre-Final Year at IIT BHU)
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

	ll n,k ;
	cout <<"Enter Number of nodes in graph: ";
	cin >> k;
	cout << "Enter Number of edges in graph: ";
	cin >> k;

	vector<vector<int>>graph; 
	
	cout<<"Enter edges end-point(with space):"<<endl;
	graph.resize(n+1);	// to avoid out of bound
	for(int i=0;i<k;i++){
		int x,y;
		cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x); // for undirected graph
	}
	cout<<"Enter The root node(from where the bfs starts):"<<endl;
	int root;
	cin>>root;

	queue<int>q; // for bfs
	vector<bool>visited(n+1,false); // to get whether the node is visited or not

	q.push(root); // adding root to the queue
	visited[root]=true;

	/* Now will go through all the vertex which are directly or indeirectly connected to the root node in Breadth First Search Order...
	*/
	while(!q.empty()){
		int node=q.front();
		cout<<node<<" ";
		q.pop(); // deleting the node..

		// Now adding all the unvisited child of the node in the queue
		for(int child:graph[node]){
			if(!visited[child]){
				visited[child]=true;
				q.push(child);
			}
		}
	}
	
	return 0;
} 

