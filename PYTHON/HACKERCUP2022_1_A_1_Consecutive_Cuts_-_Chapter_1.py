import sys
sys.stdin = open("C:\Harsh\CP-CODES\consecutive_cuts_chapter_1_validation_input.txt","r")
#f.read()
t = int(input())
for tt in range(1,t+1):
    n,k = map(int,input().split())
    
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    if k == 0:
        if a==b :
            print("Case #"+str(tt)+": " 'YES')
            break
        else:
            print("Case #"+str(tt)+": " 'NO') 
              
    roat = a.index(b[0])
    a = a[roat:n]+a[0:roat]
    if k>0:

        if a == b :
            print("Case #"+str(tt)+": " 'YES')
        else:
            print("Case #"+str(tt)+": " 'NO')    