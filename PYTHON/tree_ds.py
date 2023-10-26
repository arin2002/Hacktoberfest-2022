def printParents(node, adj, parent):

	if (parent == 0):
		print(node, "->Root")
	else:
		print(node, "->", parent)

	for cur in adj[node]:
		if (cur != parent):
			printParents(cur, adj, node)

def printChildren(Root, adj):

	q = []

	q.append(Root)

	vis = [0]*len(adj)

	while (len(q) > 0):
		node = q[0]
		q.pop(0)
		vis[node] = 1
		print(node, "-> ", end=" ")

		for cur in adj[node]:
			if (vis[cur] == 0):
				print(cur, " ", end=" ")
				q.append(cur)
		print("\n")

def printLeafNodes(Root, adj):

	for i in range(0, len(adj)):
		if (len(adj[i]) == 1 and i != Root):
			print(i, end=" ")
	print("\n")

def printDegrees(Root, adj):

	for i in range(1, len(adj)):
		print(i, ": ", end=" ")

		if (i == Root):
			print(len(adj[i]))
		else:
			print(len(adj[i])-1)

N = 7
Root = 1

adj = []
for i in range(0, N+1):
	adj.append([])

adj[1].append(2)
adj[2].append(1)

adj[1].append(3)
adj[3].append(1)

adj[1].append(4)
adj[4].append(1)

adj[2].append(5)
adj[5].append(2)

adj[2].append(6)
adj[6].append(2)

adj[4].append(7)
adj[7].append(4)

print("The parents of each node are:")
printParents(Root, adj, 0)

print("The children of each node are:")
printChildren(Root, adj)

print("The leaf nodes of the tree are:")
printLeafNodes(Root, adj)

print("The degrees of each node are:")
printDegrees(Root, adj)
