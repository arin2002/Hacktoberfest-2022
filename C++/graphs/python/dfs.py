
# Function to return a list containing the DFS traversal of the graph.
def dfsOfGraph(v, adj):
    visited = [False]*v
    ans = []

    # main dfs function, uses recurssion
    def dfs(node, adj, visited, ans):
        if node is None:
            return
        visited[node] = True
        ans.append(node)
        for u in adj[node]:
            if not visited[u]:
                dfs(u, adj, visited, ans)

    dfs(0, adj, visited, ans)
    return ans


if __name__ == '__main__':
    # V = no. of vertices
    # E = no. of edges
    V, E = map(int, input().split())
    adj = [[] for i in range(V)]

    # input the edges in the form u -> v
    for _ in range(E):
        u, v = map(int, input().split())
        adj[u].append(v)
        adj[v].append(u)

    ans = dfsOfGraph(V, adj)
    for i in range(len(ans)):
        print(ans[i], end=" ")
    print()
