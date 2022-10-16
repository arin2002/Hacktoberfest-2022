public class ValidSudoku {
    
    public boolean isValidSudoku(char[][] board) {
        //The Java.util.HashSet.add() method will add the element only if the specified element is not present in the HashSet else the function will return False if the element is already present in the HashSet
        HashSet<String> set = new HashSet<>();
       // we iterate throught the board only one time and store the strings and if we find any of the string already present in
        // the hashset again then we return false
      for(int i=0;i<9; i++)
      {
          for(int j=0;j<9;j++)
          {
              char ch = board[i][j];
              String s ="";
              if(ch != '.')
              {
                 if(!set.add(s + "row" + i + ch) || !set.add(s + "column" + j + ch)) 
                 {
                     
                     return false;
                 }
                  // (row/3 * 3 + column/3 is a formula to get the box no , just a way to maintain consistent box number,  dry run this formula for 
				  // better  understanding
                  if(!set.add(s + "box" + (((i/3) *3) + j/3) + ch))
                      return false;
              }
          }
      }
        
        return true;
      
    }
   
}
