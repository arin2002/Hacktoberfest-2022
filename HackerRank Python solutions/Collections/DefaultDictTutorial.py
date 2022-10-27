
from collections import defaultdict
d = defaultdict(list)
n,m=map(int,input().split())
for i in range(n):
    w = input()
    d[w].append(str(i+1))
for j in range(m):
    w = input()
    print(' '.join(d[w]) or -1)
