class Solution
{
    long subCount(long arr[] ,int n,int k) {
        long ans = 0L, curSum = 0L;
        
        HashMap<Long, Integer> map = new HashMap<>();
        map.put(0L, 1);
        
        for(int i=0; i<n; i++) {
            curSum += arr[i];
            
            long curRem = curSum % k;
            
            if(curRem < 0) curRem += k;
            
            if(map.containsKey(curRem)) {
                ans += map.get(curRem);
                map.put(curRem, map.get(curRem) + 1);
            } else {
                map.put(curRem, 1);
            }
        }
        
        return ans;
    }
}
