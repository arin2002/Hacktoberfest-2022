
class Solution {
    static int maxProfit(int k, int n, int arr[]) {
        int dp[][] =  new int[k+1][n];
        
        for(int i=0; i<dp.length; i++) {
            for(int j=0; j<dp[0].length; j++) {
                if(i == 0) dp[i][j] = 0;
                else if(j == 0) dp[i][j] = 0;
                
                else {
                    int max = Integer.MIN_VALUE;
                    max = Math.max(max, dp[i][j-1]);
                    
                    for(int l=0; l<j; l++) {
                        max = Math.max(max, arr[j] - arr[l] + dp[i-1][l]);
                    }
                    
                    dp[i][j] = max;
                }
            }
        }
        
        return dp[k][n-1];
    }
}
