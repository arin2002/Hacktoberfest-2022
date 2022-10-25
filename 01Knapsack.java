class Solution 
{ 
    //Function to return max value that can be put in knapsack of capacity W.
    static int knapSack(int W, int wt[], int val[], int n) { 
        int dp[][] = new int[n+1][W+1];
        
        for(int i=0; i<dp.length; i++) {
            dp[i][0] = 0;
        }
        
        for(int j=0; j<dp[0].length; j++) {
            dp[0][j] = 0;
        }
        
        for(int i=1; i<dp.length; i++) {
            for(int j=1; j<dp[0].length; j++) {
                dp[i][j] = dp[i-1][j];
                int curwt = wt[i-1];
                if(j >= curwt) {
                    dp[i][j] = Math.max( dp[i][j], (val[i-1] + dp[i-1][j-curwt]) );
                }
            }
        }
        
        return dp[n][W];
    } 
}
