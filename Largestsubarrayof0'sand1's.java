class Solution {

    int maxLen(int[] arr, int n) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int curSum = 0;
        
        int ans = 0;
        
        for(int i=0; i<n; i++) {
            if(arr[i] == 0) curSum += -1;
            else curSum += 1;
            
            if(curSum == 0) ans = Math.max(ans, i+1);
            
            if(map.containsKey(curSum)) {
                ans = Math.max(ans, i - map.get(curSum));
            } else {
                map.put(curSum, i);   
            }
        }
        
        return ans;
    }
}
