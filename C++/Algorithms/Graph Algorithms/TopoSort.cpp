//Function to return list containing vertices in Topological order. 
	vector<int> khansAlgo(int n, vector<int> adj[], vector<int> &indeg){
	    queue<int> q;
	    vector<bool> visited(n, false);
	    vector<int> ans;
	    for(int i = 0; i < n; i++){
	        if(indeg[i] == 0){
	            visited[i] = true;
	            q.push(i);
	        }
	    }
	    
	    while(!q.empty()){
	        int curr = q.front();
	        q.pop();
	        
	        ans.push_back(curr);
	        for(auto itr: adj[curr]){
	            indeg[itr]--;
	            if(!visited[itr] and indeg[itr] == 0){
	                visited[itr] = true;
	                q.push(itr);
	            } 
	        }
	    }
	    
	    return ans;
	}
	vector<int> topoSort(int V, vector<int> adj[])
	{
	    vector<int> indeg(V, 0);
	    for(int i = 0; i < V; i++){
	        for(auto itr: adj[i]){
	            indeg[itr]++;
	        }
	    }
	    return khansAlgo(V, adj, indeg);
	}