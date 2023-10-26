class Solution {
    public boolean canPair(int[] nums, int k) {
        HashMap<Integer, Integer> map = new HashMap<>();
        
        for(int i=0; i<nums.length; i++) {
            int rem = nums[i] % k;
            if(map.containsKey(rem)) {
                map.put(rem, map.get(rem)+1);
            } else {
                map.put(rem, 1);
            }
        }
        
        for(int rem: map.keySet()) {
            int orem = Math.abs(k - rem);
            if(rem == 0) {
                if(map.get(rem) % 2 != 0) return false;
            } else if(2 * rem == k) {
                if(map.get(rem) % 2 != 0) return false;
            } else {
                if(map.get(rem) != map.get(orem)) return false;
            }
        }
        
        return true;
    }
}
