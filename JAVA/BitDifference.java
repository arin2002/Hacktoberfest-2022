public static long sumBitDiff(int arr[], int n) {
    int ans = 0;

    for(int i=0; i<32; i++) {
        int cur = 0;

        for(int j=0; j<n; j++) {
            if((arr[j] & (1<<i)) == 0) cur++;
        }
        ans += cur * (n - cur) * 2;
    }

    return ans;
}

// For negative Numbers also

static int countBits(int n, long a[]) {
  
    long ans = 0;
    int m = 1000000007;

    for(int i=0; i<31; i++) {
        int count = 0;
        for(int j=0; j<n; j++) {
            if((a[j] & (1<<i)) == 0) count++;
        }
        // ans += count * (n - count) * 2;
        ans += ((count%m) * ((n-count)%m)) % m * (2);

        if(ans >= m)
            ans -= m;
    }

    return (int)ans;
}

// public static long sumBitDiff(int arr[], int n) { 
//     long ans = 0;

//     for(int i=0; i<n; i++) {
//         for(int j=i; j<n; j++) {
//             ans += one(arr[i] ^ arr[j]);
//         }
//     }

//     return ans*2;
// } 

// static int one(int n) {
//     int ans = 0;

//     while(n > 0) {
//         n = n & (n-1);
//         ans++;
//     }

//     return ans;
// }
