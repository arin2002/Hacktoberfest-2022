from collections import deque


# Function to return Breadth First Traversal of given graph.
def bfsOfGraph(v, adj):
    visited = [False]*v
    q = deque()
    q.append(0)
    visited[0] = True
    ans = []
    while q:
        nod = q.popleft()
        ans.append(nod)
        for u in adj[nod]:
            if not visited[u]:
                visited[u] = True
                q.append(u)

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

    ans = bfsOfGraph(V, adj)
    for i in range(len(ans)):
        print(ans[i], end=" ")
    print()
