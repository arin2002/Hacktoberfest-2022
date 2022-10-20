class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        int ans=0,diff=INT_MAX;
        
        for(int i=0;i<nums.size()-2;i++)
        {
            int j=i+1, k=nums.size()-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(target-sum)<diff)
                {
                    ans=sum;
                    diff=abs(target-sum);
                }
                
                if(sum<target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        
        return ans;
    }
};
