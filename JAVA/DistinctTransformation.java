public static int solution(String s, String t) {
  int dp[][] = new int[s.length()+1][t.length()+1];

  for(int i=dp.length-1; i>=0; i--) {
      for(int j=dp[0].length-1; j>=0; j--) {
          if(j == dp[0].length-1) dp[i][j] = 1;
          else if(i == dp.length-1) dp[i][j] = 0;
          else {
              if(s.charAt(i) == t.charAt(j)) {
                      dp[i][j] = dp[i+1][j+1] + dp[i+1][j];		                
              } else {
                  dp[i][j] = dp[i+1][j];
              }
          }
      }
  }

  return dp[0][0];
}
