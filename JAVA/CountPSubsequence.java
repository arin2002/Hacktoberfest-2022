class Solution
{
    long countPS(String str) {  
        long m = 1000000007L;
        int n = str.length();
        long dp[][] = new long[n][n];
        
        for(int gap=0; gap<n; gap++) {
            for(int i=0,j=gap; j<n; i++,j++) {
                if(gap == 0) {
                    dp[i][j] = 1L;
                } else if(gap == 1) {
                    if(str.charAt(i) == str.charAt(j)) {
                        dp[i][j] = 3L;
                    } else {
                        dp[i][j] = 2L;
                    }
                } else {
                    if(str.charAt(i) == str.charAt(j)) {
                        dp[i][j] = 1L + (dp[i+1][j]%m + dp[i][j-1]%m)%m;
                    } else {
                        dp[i][j] = ( dp[i+1][j]%m + (dp[i][j-1]%m - dp[i+1][j-1]%m + m)%m ) % m;
                    }
                }
            }
        }
        
        return dp[0][n-1];
    }
}
