class Solution {
    public int maxProfit(int[] prices) {
        int leastSf = prices[0]; 
        int mp1 = 0; // Max Profit if sold today
        int dp1[] = new int[prices.length]; // Max Profit if sold is before ith day or including it 
        
        for(int i=1; i<prices.length; i++) {
            if(prices[i] < leastSf) leastSf = prices[i];
            
            mp1 = prices[i] - leastSf;
            
            if(mp1 > dp1[i-1]) {
                dp1[i] = mp1;
            } else {
                dp1[i] = dp1[i-1];
            }
        }
        
        int maxSf = prices[prices.length-1];
        int mp2 = 0; // Max Profit if buy Today
        int dp2[] = new int[prices.length]; // Max Profit if buy is after ith day or including it  
        
        for(int i=prices.length-2; i>=0; i--) {
            if(prices[i] > maxSf) maxSf = prices[i];
            
            mp2 = maxSf - prices[i];
            
            if(mp2 > dp2[i+1]) {
                dp2[i] = mp2;
            } else {
                dp2[i] = dp2[i+1];
            }
        }
        
        int ans = 0;
        for(int i=0; i<prices.length; i++) {
            if(dp1[i] + dp2[i] > ans) {
                ans = dp1[i] + dp2[i];
            }
        }
        
        return ans;
    }
}
