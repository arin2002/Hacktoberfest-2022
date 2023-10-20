#include <bits/stdc++.h>
using namespace std;

// take same name of vector in this
void linked(vector<int> adj[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
    }
}

bool detect_cycle(vector<int> adj[], int i,int n)
{
    queue<pair<int,int>>q;
    int arr[n]={0};
    // start ka index 1 
    arr[i]=1;
    cout<<i<<" ";
    q.push({i,-1});

    while(!q.empty())
    {
        int u = q.front().first;
        int prev = q.front().second;
        q.pop();

        for(auto it:adj[u])
        {
            if(arr[it]!=1)
            {
                arr[it] = 1;
                q.push({it,prev});
            }
            else if(prev !=it)
            return true;
        }
    }

    return false;
}

int main()
{
    int n;
    cout << "Enter no of edges : ";
    cin >> n;
    vector<int> adj[n+1];

    cout << "Enter adj nodes : " << endl;
    linked(adj, n);
    detect_cycle(adj,1,n);
    return 0;
}