class Solution
{
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    public static String smallestWindow(String str1, String str2) {
        String ans = "";
        
        HashMap<Character, Integer> map2 = new HashMap<>();
        
        for(int i=0; i<str2.length(); i++) {
            char ch = str2.charAt(i);
            map2.put(ch, map2.getOrDefault(ch, 0) + 1);
        }
        
        HashMap<Character, Integer> map1 = new HashMap<>();
        int i = -1, j = -1, cn = str2.length(), cc = 0;
        
        while(true) {
            boolean f1 = false, f2 = false;
            // Acquire
            while(i < str1.length()-1 && cc < cn) {
                i++;
                char ch = str1.charAt(i);
                map1.put(ch, map1.getOrDefault(ch, 0) + 1);
                
                if(map1.getOrDefault(ch, 0) <= map2.getOrDefault(ch,0)) {
                    cc++;
                }
                f1 = true;
            }
            
            // Collect answer and release
            while(j<i && cc == cn) {
                String curans = str1.substring(j+1, i+1);
                if(ans.length() == 0 || curans.length() < ans.length()) {
                    ans = curans;
                }
                j++;
                char ch = str1.charAt(j);
                
                if(map1.get(ch) == 1) {
                    map1.remove(ch);
                } else {
                    map1.put(ch, map1.get(ch)-1);
                }
                
                if(map1.getOrDefault(ch, 0) < map2.getOrDefault(ch,0)) {
                    cc--;
                }
                f2 = true;
            }
            
            if(!f1 && !f2) break;
        }
        
        if(ans == "") return "-1";
        
        return ans;
    }
}
