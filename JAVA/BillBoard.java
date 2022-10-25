// M-I
public static int solution(int m , int[] x, int[] rev, int k) {
    int dp[] = new int[x.length];
    int ans = 0;
    dp[0] = rev[0];

    for(int i=1; i<x.length; i++) {
        int max = 0;
        for(int j=0; j<i; j++) {
            if(x[i] - x[j] > k) {
                max = Math.max(max, dp[j]);
            }
        }
        dp[i] = max + rev[i];
    }

    for(int i=0; i<dp.length; i++) {
        ans = Math.max(ans, dp[i]);
    }

    return ans;
}

// M-ll
public static int solution(int m , int[] x, int[] rev, int t) {
		int[] dp = new int[m + 1];
		int j = 0;
		for(int i = 1; i <= m; i++) {
            // System.out.println(i+"  "+j);
			if( j < x.length && x[j] == i) {
				dp[i] = Math.max(dp[i - 1],(i - t - 1 >= 0 ? dp[i - t - 1] : 0) + rev[j]);
				j++;
			}else {
				dp[i] = dp[ i - 1];
			}
        }
        return dp[m];
    }
}
