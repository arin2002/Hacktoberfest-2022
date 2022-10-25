
n = input()
ar = input().split()
print(all([int(i)>0 for i in ar]) and any([i==i[::-1] for i in ar]))
