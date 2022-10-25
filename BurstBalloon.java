class Solution {
    public int maxCoins(int[] arr) {
        int n = arr.length;
        int dp[][] = new int[n][n];
        
        for(int gap=0; gap<n; gap++) {
            for(int i=0,j=gap; j<n; i++,j++) {
                if(gap == 0) {
                    int a = i == 0 ? 1 : arr[i-1]; 
                    int b = i == n-1 ? 1 : arr[i+1];
                    dp[i][j] = a * arr[i] * b;
                    System.out.println(dp[i][j]);
                } else {
                    int max = Integer.MIN_VALUE;
                    
                    for(int k=i-1; k<j; k++) {
                        int left = k == -1 ? 0 : dp[i][k];
                        int right = k+2 == n ? 0 : dp[k+2][j];
                        
                        int a1 = i == 0 ? 1 : arr[i-1];
                        int b1 = j == n-1 ? 1 : arr[j+1];
                        int mcost = a1 * arr[k+1] * b1;
                        
                        max = Math.max(max, left + right + mcost);
                    }
                    
                    dp[i][j] = max;
                }
            }
        }
        
        return dp[0][n-1];
    }
}


// Also
class Solution {
    public int maxCoins(int[] arr) {
        int n = arr.length;
        int dp[][] = new int[n][n];
        
        for(int gap=0; gap<n; gap++) {
            for(int i=0,j=gap; j<n; i++,j++) {
                // if(gap == 0) {
                //     int a = i == 0 ? 1 : arr[i-1]; 
                //     int b = i == n-1 ? 1 : arr[i+1];
                //     dp[i][j] = a * arr[i] * b;
                //     System.out.println(dp[i][j]);
                // } else {
                    int max = Integer.MIN_VALUE;
                    
                    for(int k=i-1; k<j; k++) {
                        int left = k == -1 ? 0 : dp[i][k];
                        int right = k+2 == n ? 0 : dp[k+2][j];
                        
                        int a1 = i == 0 ? 1 : arr[i-1];
                        int b1 = j == n-1 ? 1 : arr[j+1];
                        int mcost = a1 * arr[k+1] * b1;
                        
                        max = Math.max(max, left + right + mcost);
                    }
                    
                    dp[i][j] = max;
                // }
            }
        }
        
        return dp[0][n-1];
    }
}
