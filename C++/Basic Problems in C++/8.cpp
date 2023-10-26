int trap(vector<int>& nums) {
        vector<int>ml(nums.size()),mr(nums.size());
        ml[0]=nums[0];
        
        for(int i=1;i<nums.size();i++)
            ml[i]=max(ml[i-1],nums[i]);
        
        
        mr[nums.size()-1]=nums[nums.size()-1];
        
        for(int i=nums.size()-2;i>=0;i--)
            mr[i]=max(nums[i],mr[i+1]);
        
        int water=0;
        
        for(int i=1;i<nums.size()-1;i++){
            water+=min(mr[i],ml[i])-nums[i];
        }
        return water;
    }