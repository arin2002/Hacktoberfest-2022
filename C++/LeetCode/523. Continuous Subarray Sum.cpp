class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        if(nums.size() == 1) return false;
        
        unordered_map<int, int> map;
        int size = nums.size();
        int currsum = 0;
        
        map.insert({0,-1});
        
        for(int i=0 ; i<size ; i++){
            
            currsum += nums[i];
            currsum %= k;
            
            if(currsum == 0 && i>0) return true;
            
            if(map.count(currsum)){
                
                if(i - map[currsum] > 1) return true;
            }
            else map[currsum] = i;
            
        }
        
        return false;
    }
};
