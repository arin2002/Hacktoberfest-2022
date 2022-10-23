// problem statement 
// Nearly everyone has used the Multiplication Table. The multiplication table of size m x n is an integer matrix mat where mat[i][j] == i * j (1-indexed).

// Given three integers m, n, and k, return the kth smallest element in the m x n multiplication table


class Solution {
public:
    long long mn(long long a, long long b) {   
        return a<b?a:b;
    }
    bool condition(int m, int n, long long mid, int k) {
        long long count=0;
        for(int i=1; i<=m ; i++) {
            count+=mn(mid/i, n);
            
            if(count>=k)
                return true;
        }
        return false;
    }
    int findKthNumber(int m, int n, int k) {
        int left=1;
        long long  right = n*m;
        
        while(left < right) {
            long long  mid = left + (right - left)/2;
            
            if(condition(m, n, mid, k))
                right =mid;
            else
                left= mid +1;
            
        }
        return left;
    }
};