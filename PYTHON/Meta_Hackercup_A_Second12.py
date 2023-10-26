


t = int(input())
for tt in range(1,t+1):
    n,k = map(int,input().split())
    s = list(map(int,input().split()))
    flag1= True
    if (n<2*k):     
        for i in range(n):
            if s.count(s[i])>2:
                flag1 = False
                print("Case #"+str(tt)+": " 'NO')
                break
    else:
        print("Case #"+str(tt)+": " 'NO')
        continue
    if flag1: print("Case #"+str(tt)+": " 'YES')    
                
