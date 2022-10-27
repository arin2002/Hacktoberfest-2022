class FindPeakElemen {
    public int findPeakElement(int[] nums) {
        int pi=0;
        if(nums.length==1)
            return 0;
        if(nums[0]>nums[1]){
            pi=0;
        }
        for(int i=1;i<nums.length-1;i++){
            if(nums[i]>=nums[i-1] && nums[i]>=nums[i+1]){
                pi=i;
            }
        }
        if(nums[nums.length-1]>nums[nums.length-2]){
            pi=nums.length-1;
        }
        return pi;
    }
}
