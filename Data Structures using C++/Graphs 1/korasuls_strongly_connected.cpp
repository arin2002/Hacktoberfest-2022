#include<bits/stdc++.h>
using namespace std;


void topo_dfss(int it, vector<int> adj[],stack<int> &st,vector<int>&vis)
{
    vis[it] = 1;

    for(auto i : adj[it]){
        if(!vis[i])
            topo_dfss(i,adj,st,vis);
    }

    st.push(it);
}

void topo_dfs(vector<int> adj[],vector<int> &topo,int n)
{
    stack<int> st;
    vector<int> vis(n,0);

    for(int i =0; i<n; i++){
        if(!vis[i])
            topo_dfss(i,adj,st,vis);
    }

    while(!st.empty()){
        topo.push_back(st.top());
        st.pop();
    }
}


void dfs(int it, vector<int> adj[],vector<int>&t,vector<int> &vt)
{
    t[it] = 1;

    for(auto i : adj[it]){
        if(!t[i])
            dfs(i,adj,t,vt);
    }

    vt.push_back(it);
}

void kos(vector<int> adj[],vector<int>topo, int n, vector<int> &strong)
{
    vector<int> t(n,0);
    vector<int> transpose[n];

    for(int i = 0; i<n; i++)
    {
        for(auto it: adj[i])
            transpose[it].push_back(i);
    }
    for(int i = 0; i<n; i++)
    {
        int itr = topo[i];
        if(!t[itr])
            dfs(itr,transpose,t,strong);
    }
}

void print(vector<int> topo)
{
    int n = topo.size();

    for (int i = 0; i < n; i++)
    {
        cout<<topo[i]<<" ";
    }

    cout<<endl;
    
}

int main()
{
    int n,v;
    cin>>n>>v;
    vector<int> adj[n];

    for(int i = 0; i<v; i++){
        int u,V;
        cin>>u>>V;
        adj[u].push_back(V);
    }

    // step 1 -> topo sort pehle
    vector<int> topo,strong;
    topo_dfs(adj,topo,n);
    print(topo);
    // step 2 do dfs acc to topo sort
    kos(adj,topo,n,strong);
    print(strong);

    return 0;
}