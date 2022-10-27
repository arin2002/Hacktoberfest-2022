class Solution {
    public String findSubString( String str) {
        HashSet<Character> set = new HashSet<>();
        
        for(int i=0; i<str.length(); i++) {
            set.add(str.charAt(i));
        }
        
        HashMap<Character, Integer> map = new HashMap<>();
        int i = -1, j = -1;
        String ans = "";
        
        
        while(true) {
            
            boolean f1 = false, f2 = false;
            
            // Acquire
            while(i<str.length()-1 && map.size() < set.size()) {
                i++;
                char ch = str.charAt(i);
                
                map.put(ch, map.getOrDefault(ch,0) + 1);
                
                f1 = true;
            }
            
            // Answer + Remove
            while(j < i && map.size() == set.size()) {
                String curAns = str.substring(j+1, i+1);
                
                if(ans.length() == 0 || curAns.length() < ans.length()) ans = curAns;
                
                j++;
                char ch = str.charAt(j);
                
                if(map.get(ch) == 1) {
                    map.remove(ch);
                } else {
                    map.put(ch, map.get(ch)-1);
                }
                
                f2 = true;
            }
            
            
            if(!f1 && !f2) break;
        }
        
        return ans;
        
    }
}
