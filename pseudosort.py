t=int(input())
while t>0:
    i=int(input())
    a=input()
    j=0
    a=a.split(" ")
    for k in range(i):
        if k+1<=i-1:
            if int(a[k])>int(a[k+1]):
                if k+2<=i-1:
                    if int(a[k])<=int(a[k+2]):
                        j=j+1
                    else:
                        j=j+2
                else:
                    j=j+1
        else:
            if int(a[k])>int(a[k+1]):
                if k+2<=i-1:
                    if int(a[k])<=int(a[k+2]):
                        j=j+1
                    else:
                        j=j+2
                else:
                    j=j+1
    if j<=1:
        print('Yes')
    else:
        print('No')
    t=t-1