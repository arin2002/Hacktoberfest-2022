class Solution {
    public int numberOfArithmeticSlices(int[] nums) {
        int ans = 0;
        int n = nums.length;
        HashMap<Integer, Integer> map[] = new HashMap[n];
        
        for(int i=0; i<n; i++) {
            map[i] = new HashMap<>();
        }
        
        for(int i=1; i<n; i++) {
            for(int j=0; j<i; j++) {
                long cd = (long)nums[i] - (long)nums[j];
                if(cd <= Integer.MIN_VALUE || cd >= Integer.MAX_VALUE) continue;
                
                int apsEndingOnJ = map[j].getOrDefault((int)cd, 0);
                int apsEndingOnI = map[i].getOrDefault((int)cd, 0);
                
                ans += apsEndingOnJ;
                map[i].put((int)cd, apsEndingOnJ + apsEndingOnI + 1);
            }
        }
        
        return ans;
    }
}
