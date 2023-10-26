#include <bits/stdc++.h>
using namespace std;

class LCA {
    int n, N;
    vector<vector<int>> graph, LCA;
    vector<int> depth;

public:
    void init(int _n) {
        n = _n;
        N = log2(_n) + 2;

        LCA.assign(n + 1, vector<int> (N + 1, -1));
        graph.resize(n + 1);
        depth.assign(n + 1, 0);
    }

    void addEdge(int u, int v) {
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    void calculateLCA() {
        dfs(1, -1, 0);
        for(int i = 1; i <= N; i++) {
            for(int node = 1; node <= n; node++) {
                if(LCA[node][i - 1] != -1) {
                    LCA[node][i] = LCA[ LCA[node][i-1] ][i-1];
                }
            }
        }
    }


    void dfs(int node, int parent, int curDepth) {
        depth[node] = curDepth;
        LCA[node][0] = parent;

        for(int child: graph[node]) {
            if (child != parent) {
                dfs(child, node, curDepth + 1);
            }
        }
    }
     
    int getLCA(int node1, int node2) {
        if(depth[node2] < depth[node1]) {
            swap(node1, node2);
        }
     
        int diff = depth[node2] - depth[node1];
        while (diff > 0) {
            int jump = log2(diff);
            node2 = LCA[node2][jump];

            diff -= (1 << jump);
        }

        if(node1 == node2) {
            return node1;
        }

        for (int i = N; i >= 0; i--) {
            if (LCA[node1][i] != -1 && LCA[node1][i] != LCA[node2][i]) {
                node1 = LCA[node1][i];
                node2 = LCA[node2][i];
            }
        }
        return LCA[node1][0];
    }
};


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;

    LCA lca;
    lca.init(n);

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        lca.addEdge(u, v);
    }

    lca.calculateLCA();

    int node1, node2;
    cin >> node1 >> node2;
    cout << "LCA of node-" << node1 << " and node-" << node2 << " is node-" << lca.getLCA(node1, node2) << '\n'; 

    return 0;
}
