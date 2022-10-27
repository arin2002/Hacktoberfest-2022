class Solution {
    public long count(int arr[], int m, int n) { 
        long dp[] = new long[n+1];
        Arrays.fill(dp, 0L);
        
        dp[0] = 1L;
        
        for(int i=0; i<arr.length; i++) {
            for(int j=1; j<dp.length; j++) {
                if(j >= arr[i]) {
                    dp[j] = dp[j] + dp[j - arr[i]];
                }
            }
        }
        
        return dp[n];
    } 
}
