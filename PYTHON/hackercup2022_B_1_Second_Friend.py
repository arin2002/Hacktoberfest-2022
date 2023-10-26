
def solve(R,C,V):
    print("Case #{}: ".format(t), end="")
    check = 1
    if R == 1:
        for i in range(C):
            if V[0][i] == '^': 
                check = 0
    if C == 1:
        for i in range(R):
            if V[i][0] == '^': 
                check = 0
    if check:
        print("Possible")
        if R == 1 or C == 1:
            for i in range(R): 
                print(V[i])
        else:
            for i in range(R):
                for j in range(C):
                    print('^', end="")
                print()
    else:
        print("Impossible")

for t in range(1, int(input())+1):
    R,C  = map(int, input().split())
    V = []
    for _ in range (R):
        V.append(input())
    solve(R,C,V)