class GfG
{
    boolean areKAnagrams(String s1, String s2, int k) {
        
        if(s1.length() != s2.length()) return false;
        
        int arr[] = new int[26];
        
        for(int i=0; i<s1.length(); i++) {
            arr[s1.charAt(i) - 'a']++; 
        }
        
        for(int i=0; i<s2.length(); i++) {
            arr[s2.charAt(i) - 'a']--; 
        }
        int ans = 0;
        for(int i=0; i<26; i++) {
            if(arr[i] > 0) ans += arr[i];
        }
        
        return ans <= k;
    }
}
