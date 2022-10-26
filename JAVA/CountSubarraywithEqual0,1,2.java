class Solution 
{ 
    long getSubstringWithEqual012(String s) { 
        long ans = 0L;
        int cz = 0, co = 0, ct = 0;
        HashMap<String, Long> map = new HashMap<>();
        
        map.put("0#0", 1L);
        
        for(int i=0; i<s.length(); i++) {
            char ch = s.charAt(i);
            
            if(ch == '0') cz++;
            else if(ch == '1') co++;
            else ct++;
            
            String str = (co-cz) + "#" + (ct-co);
            
            if(map.containsKey(str)) {
                ans += map.get(str);
                map.put(str, map.get(str) + 1L);
            } else {
                map.put(str, 1L);
            }
        }
        
        return ans;
    }
}
