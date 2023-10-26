class Solution{
    int longSubarrWthSumDivByK(int arr[], int n, int k) {
        int ans = 0, curSum = 0;
        
        HashMap<Integer, Integer> map = new HashMap<>();
        
        for(int i=0; i<n; i++) {
            curSum += arr[i];
            
            int curRem = curSum % k;
            if(curRem < 0) curRem += k;
            
            if(curRem == 0) ans = Math.max(ans, i+1);
            
            if(map.containsKey(curRem)) {
                ans = Math.max(ans, i - map.get(curRem));
            } else {
                map.put(curRem, i);
            }
        }
        
        return ans;
    }
}
