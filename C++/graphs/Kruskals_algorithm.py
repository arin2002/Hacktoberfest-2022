def find(parent,u):
    if parent[u] == u:
        return u
    return find(parent, parent[u])

def union(parent, rank, x, y):
    x_ = find(parent, x)
    
    y_ = find(parent, y)
 
    if rank[x_] < rank[y_]:
        parent[x_] = y_
    elif rank[x_] > rank[y_]:
        parent[y_] = x_
 
    else:
        parent[y_] = x_
        rank[x_] += 1



def kruskals():
    global graph,vertices
    result = [] 
    i = 0 
    num = 0
    graph = sorted(graph,key=lambda item: item[2])
    parent = []
    rank = []
    for j in range(vertices):
        parent.append(j)
        rank.append(0)
    
    while(num<vertices-1):
        u, v, w = graph[i]
        i = i + 1
        x = find(parent, u)
        y =find(parent, v)
 
        if x != y:
            num = num + 1
            result.append([u, v, w])
            union(parent, rank, x, y)
 
    minimumCost = 0
    print ("Edges and their weights")
    for u, v, weight in result:
        minimumCost += weight
        print("%d ~ %d --> %d" % (u, v, weight))
    print("Minimum Spanning Tree cost :" , minimumCost)


vertices=int(input('number of vertices : '))
edges=int(input('number of edges : '))
graph=[list(map(int,input().split())) for i in range(edges)]
kruskals()


'''
Input:
4
5
0 1 10
0 2 6
0 3 5
1 3 15
2 3 4

'''
