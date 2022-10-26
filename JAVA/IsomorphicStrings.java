class Solution
{
    //Function to check if two strings are isomorphic.
    public static boolean areIsomorphic(String str1,String str2) {
        HashMap<Character, Character> map = new HashMap<>();
        HashSet<Character> set = new HashSet<>();
        
        if(str1.length() != str2.length()) return false;
        
        for(int i=0; i<str1.length(); i++) {
            char c1 = str1.charAt(i);
            char c2 = str2.charAt(i);
            if(!map.containsKey(c1)) {
                map.put(c1, c2);
                if(set.contains(c2)) return false;
                set.add(c2);
            } else {
                if(c2 != map.get(c1)) return false;
            }
        }
        
        return true;
    }
}
