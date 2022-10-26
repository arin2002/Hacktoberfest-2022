class Solution{
    int longestUniqueSubsttr(String str){
        int i = -1, j = -1, ans = 0;
        
        HashMap<Character, Integer> map = new HashMap<>();
        
        while(true) {

            boolean f1 = false, f2 = false;

            // Acquire
            while(i < str.length() - 1 ) {
                
                f1 = true;
                
                i++;
                char ch = str.charAt(i);
                
                map.put(ch, map.getOrDefault(ch, 0) + 1);
                
                if(map.get(ch) == 2) {
                    break;
                } else {
                    if(ans < i-j) ans = i-j;
                }
            }
            
            //Release
            while(j < i) {
                
                f2 = true;
                
                j++;
                char ch = str.charAt(j);
                
                map.put(ch, map.get(ch)-1);
                
                if(map.get(ch) == 1) {
                    break;
                }
            }
            
            if(!f1 && !f2) break;
        }
        
        return ans;
    }
}
