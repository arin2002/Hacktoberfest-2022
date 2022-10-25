class Solution {
    
    final static int m = 1000000007;
    
    public int add(int a,int b) {
        return (a%m + b%m)%m;
    } 
    
    public int substract(int a, int b) {
        return (a%m - b%m + m)%m;
    }
    
    public int countPalindromicSubsequences(String str) {
        int n = str.length();
        int dp[][] = new int[n][n];
        
        HashMap<Character, Integer> map = new HashMap<>();
        int prev[] = new int[n];
        
        for(int i=0; i<n; i++) {
            char ch = str.charAt(i);
            
            if(!map.containsKey(ch)) {
                prev[i] = -1;
            } else {
                prev[i] = map.get(ch);
            }
            
            map.put(ch, i);
        }
        
        map.clear();
        
        int next[] = new int[n];
        
        for(int i=n-1; i>=0; i--) {
            char ch = str.charAt(i);
            
            if(!map.containsKey(ch)) {
                next[i] = -1;
            } else {
                next[i] = map.get(ch);
            }
            
            map.put(ch, i);
        }
        
        for(int gap=0; gap<n; gap++) {
            for(int i=0,j=gap; j<n; i++,j++) {
                
                if(gap == 0) {
                    dp[i][j] = 1;
                } else if(gap == 1) {
                    dp[i][j] = 2;
                } else {
                    if(str.charAt(i) != str.charAt(j)) {
                        dp[i][j] = add(dp[i][j-1], substract(dp[i+1][j], dp[i+1][j-1]));
                    } else {
                        int ni = next[i];
                        int pi = prev[j];
                        if(ni > pi) { // No a
                            dp[i][j] = add( 2 * dp[i+1][j-1]%m, 2 );
                        } else if(ni == pi) { // One a
                            dp[i][j] = add( 2 * dp[i+1][j-1]%m, 1 );
                        } else { // More than One
                            dp[i][j] = substract(2 * dp[i+1][j-1]%m, dp[ni+1][pi-1]);
                        }    
                    }
                }
            }
        }
        
        return (int)dp[0][n-1];
    }
}
