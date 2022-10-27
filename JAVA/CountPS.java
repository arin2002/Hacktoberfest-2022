class Solution {
    
    public int CountPS(String str, int n) {
        // Given Size >= 2 if it's not then ans++ in gap == 0 also
        boolean dp[][] = new boolean[n][n];
        int ans = 0;
        
        for(int gap=0; gap<n; gap++) {
            for(int i=0, j=gap; j<n; i++, j++) {
                if(gap == 0) {
                    dp[i][j] = true;
                } else if (gap == 1) {
                    if(str.charAt(i) == str.charAt(j)) {
                        dp[i][j] = true;
                        ans++;
                    } else {
                        dp[i][j] = false;
                    }
                } else {
                    if(str.charAt(i) == str.charAt(j) && dp[i+1][j-1]) {
                        dp[i][j] = true;
                        ans++;
                    } else {
                        dp[i][j] = false;
                    }
                }
            }
        }
        
        return ans;
    }
}
