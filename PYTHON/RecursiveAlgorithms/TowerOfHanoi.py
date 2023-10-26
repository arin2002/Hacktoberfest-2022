def TowerOfHanoi(n,from_pol, to_pol ,aux_pol):
    if n==0:
        return 0
    TowerOfHanoi(n-1,from_pol,aux_pol,to_pol)
    print("Move disk",n,"from pole",from_pol,"to pole",to_pol)
    TowerOfHanoi(n-1,aux_pol,to_pol,from_pol)
    return

TowerOfHanoi(3,'A','B','C')