class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
      
        map<int , int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])!=mp.end())
            {
                
            auto it=mp.find(nums[i]);
                if(abs(i-it->second)<=k)
                   return true;
            }
                 
            mp[nums[i]]=i;
        }
        return false;
    }
};
