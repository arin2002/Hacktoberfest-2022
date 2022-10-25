class Solution {
    //Function to find the nth catalan number.
    public static BigInteger findCatalan(int n) {
        BigInteger dp [] = new BigInteger[n+1];

        Arrays.fill(dp, BigInteger.ZERO);
            
        dp[0] = BigInteger.ONE;
        dp[1] = BigInteger.ONE;
        
        for(int i=2; i<=n; i++) {
            for(int j=0; j<i; j++) {
                dp[i] = dp[i].add(dp[j].multiply(dp[i-j-1]));
            }
        }
        
        return dp[n];
    }
}
