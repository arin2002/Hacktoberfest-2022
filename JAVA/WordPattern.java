class Solution {
    public boolean wordPattern(String pattern, String s) {
        String word[] = s.split(" ");
        
        HashMap<Character, String> map = new HashMap<>();
        HashSet<String> set = new HashSet<>();
        
        if(pattern.length() != word.length) return false;
        
        for(int i=0; i<pattern.length(); i++) {
            char ch = pattern.charAt(i);
            if(!map.containsKey(ch)) {
                if(set.contains(word[i])) return false; 
                map.put(ch, word[i]);               
                set.add(word[i]);
            } else {
                if(!map.get(ch).equals(word[i])) return false;
            }
        }
        
        return true;
    }
}
