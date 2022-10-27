from collections import deque


# Function to return list containing vertices in Topological order. Uses BFS.
def topoSort(v, adj):
    inorder = [0 for i in range(v)]
    for i in range(v):
        for j in adj[i]:
            inorder[j] += 1

    topo_sort = []
    q = deque()
    for i in range(v):
        if inorder[i] == 0:
            q.append(i)

    while q:
        node = q.popleft()
        topo_sort.append(node)
        for adj_node in adj[node]:
            inorder[adj_node] -= 1
            if inorder[adj_node] == 0:
                q.append(adj_node)

    return topo_sort


if __name__ == '__main__':
    V, E = map(int, input().strip().split())
    adj = [[] for i in range(V)]

    for i in range(E):
        u, v = map(int, input().split())
        adj[u].append(v)

    res = topoSort(V, adj)

    print(*res)
