 /**
 *Given an array of strings strs, group the anagrams together. You can return the answer in any order.
 */


//Time Complexity: O(n * klog(k)) since we are sorting k characters n times in the loop.

class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> result = new ArrayList<>();
        
        HashMap<String, List<String>> map = new HashMap<>();
        
        for(String str : strs) {
            
            char[] arr = str.toCharArray();
            
            Arrays.sort(arr);
            
            String curr = new String(arr);
            
            if(!map.containsKey(curr)) {
                map.put(curr, new ArrayList<String>()); 
            }
            
            map.get(curr).add(str);
            
        }
        
        result.addAll(map.values());
        
        return result;
        
    }
}