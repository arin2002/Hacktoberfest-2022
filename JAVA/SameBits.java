//  12 -> 1100
// first one has two options ->
// 1. 1[100]      2. 0[_ _ _] In three places two setbits has to present. Ways = 3C2
// Recur for 1 case -> 100
// 1. 1[00]       2. 0[_ _] Ways = 2C1


long ncr(long n, long r) {
        
    long res = 1L;

    if(n<r) {
        return 0L;
    }

    for(long i=0L; i<r; i++) {
        res *= n - i;
        res /= i+1;
    }

    return res;
}

int setBits(long n) {
    int res = 0;

    while(n != 0) {
        n = n & (n-1);
        res++;
    }

    return res;
}

long count(long n) {

    int k = setBits(n);

    return count(n, k, 63);

    // return 0L;
}

long count(long n, int k, int i) {

    long res = 0L;

    if(i == 0) {
        return 0;
    }

    long mask = 1L<<i;

    if((mask & n) == 0) {
        res += count(n, k, i-1);
    } else {
        res = res + count(n, k-1, i-1) + ncr(i,k); 
    }

    return res;
}
