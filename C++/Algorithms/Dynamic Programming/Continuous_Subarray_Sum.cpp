class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<=1)
            return false;
        unordered_map<int,int>mp;
        mp[0]=-1;
        int curr_sum{};
        for(int i=0;i<n;i++){
            curr_sum+=nums[i];
            curr_sum=(curr_sum)%k;
            cout<<curr_sum;
            if(mp.find(curr_sum)!=mp.end()){
                if(i-mp[curr_sum]>=2)
                    return true;
            }
                else
                    mp[curr_sum]=i;
            }

    return false; 
    }
};

//Time complexity : O(N)
//Space Complexity : O(N)