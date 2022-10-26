class Solution {
    public int longestkSubstr(String str, int k) {
        int i = -1, j = -1, ans = -1;
        HashMap<Character, Integer> map = new HashMap<>();
        
        while(true) {
            
            boolean f1 = false, f2 = false;
            
            // Acquire
            while(i < str.length()-1) {
                f1 = true;
                i++;
                char ch = str.charAt(i);
                
                map.put(ch, map.getOrDefault(ch, 0) + 1);
                
                if(map.size() == k+1) {
                    break;
                } else if(map.size() == k){
                    if(ans < i-j) ans = i-j ;
                }
            }
            
            // Release
            while(j < i) {
                f2 = true;
                j++;
                char ch = str.charAt(j);
                
                if(map.get(ch) == 1) {
                    map.remove(ch);
                } else {
                    map.put(ch, map.get(ch)-1);
                }
                
                if(map.size() == k) {
                    break;
                }
            }
            
            if(!f1 && !f2) break;
        }
        
        return ans;
    }
}
