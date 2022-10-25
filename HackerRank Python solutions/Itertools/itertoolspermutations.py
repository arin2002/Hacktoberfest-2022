
import itertools
s,n = list(map(str,input().split(' ')))
s = sorted(s)
for p in list(itertools.permutations(s,int(n))):
    print(''.join(p))
