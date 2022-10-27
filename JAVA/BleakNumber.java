public int is_bleak(int n) {
        
    if(n == 2) return 0;

    int k = (int)Math.ceil((int)Math.log(n)/Math.log(2));

    for(int i=n-k; i<=n; i++) {
        if(i + setbits(i) == n) return 0;
    }

    return 1;
}

public int setbits(int n) {
    int ans = 0;

    while(n != 0) {
        n = n & (n-1);
        ans++;
    }

    return ans;
}
