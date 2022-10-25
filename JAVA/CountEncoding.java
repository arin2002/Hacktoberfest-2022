class Solution {
    public int CountWays(String str) {
        int dp[] = new int[str.length()];
        dp[0] = 1;
        
        for(int i=1; i<dp.length; i++) {
            if(str.charAt(i-1) == '0' && str.charAt(i) == '0') {
                dp[i] = 0;
            } else if(str.charAt(i-1) == '0' && str.charAt(i) != '0') {
                dp[i] = dp[i-1];
            } else if(str.charAt(i-1) != '0' && str.charAt(i) == '0') {
                if(str.charAt(i-1) == '1' || str.charAt(i-1) == '0') {
                    dp[i] = i >= 2 ? dp[i-2] : 1;
                } else {
                    dp[i] = 0;
                }
            } else {
                if(Integer.parseInt(str.substring(i-1,i+1)) <= 26) {
                    dp[i] = dp[i-1] + (i >= 2 ? dp[i-2] : 1);
                } else {
                    dp[i] = dp[i-1];
                }
            }
        }
        
        return dp[str.length()-1];
    }
}
