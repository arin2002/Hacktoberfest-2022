class Solution{
    //Function to count subarrays with sum equal to 0.
    public static long findSubarray(long[] arr ,int n) {    
        HashMap<Long, Integer> map = new HashMap<>();
        
        long ans = 0;
        long curSum = 0;
        
        for(int i=0; i<n; i++) {
            curSum += arr[i];
            
            if(curSum == 0) {
                ans++;
            }
            
            if(!map.containsKey(curSum)) {
                map.put(curSum, 1);
            } else {
                ans += map.get(curSum);
                map.put(curSum, map.get(curSum) + 1);
            }
            
        }
        
        return ans;
    }
}
