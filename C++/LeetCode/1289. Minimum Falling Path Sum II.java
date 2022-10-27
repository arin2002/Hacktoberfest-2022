class Solution {
    
    
  public int minFallingPathSum(int[][] grid) {
      
     
      int n = grid.length;
      int prev[] = new int[n];
      int ans = Integer.MAX_VALUE;
      
      for(int i = 0 ; i < n ; i++){
         prev[i] = grid[n-1][i];
      }
      
      for(int row = n-2 ; row >= 0 ; row--){
          
          int curr[] = new int[n];
          
          for(int col = 0 ; col < n ; col++){
              
               int result = Integer.MAX_VALUE;
              
              for(int i = 0 ; i < n ; i++){
          
         
              if(i == col) continue;
          
         
          
              int call = grid[row][col] + prev[i];
          
              result = Math.min(result , call);
          
          
      }
      
          curr[col] = result;
              
              
          }
          
          prev = curr;
          
      }
      
      
      for(int i = 0 ; i < n ; i++){
          
          ans = Math.min(ans , prev[i]);
          
      }
      
      return ans;
      
  }
}