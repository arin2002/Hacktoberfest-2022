static int count(int n) { 
    if((n&1) != 0) return 0;

    return (int)catalan(n/2);
}

static long catalan(int n) {
    return binomial(2*n, n) / (n+1);
}

static long binomial(int n, int r) {
    long res = 1;

    if(r > n-r) r = n-r;

    for(int i=0; i<r; i++) {
        res *= n-i;
        res /= i+1;
    }
    return res;
}
