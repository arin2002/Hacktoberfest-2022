long findNth(long N) {
    long ans = 0;
    long temp = 1;
    while(N != 0) {
        long digit = N%9;
        N /= 9;
        ans += temp*digit;
        temp *= 10;
    }
    return ans;
}

// 2nd Method
long findNth(long N) {
    String s="";
    // taking remainders by 9
    // till N become 0
    while(N!=0)
    {
        s=(char)(N%9+'0')+s;
        N=N/9;
    }
    return Long.parseLong(s);
}
