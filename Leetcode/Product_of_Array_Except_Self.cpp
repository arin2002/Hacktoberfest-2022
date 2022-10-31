class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        
        int pre = 1,post = 1;
        res[0] = pre;
        for(int i=1;i<n;i++)
        {
            pre *= nums[i-1];
            res[i] = pre;  
        }
        
        for(int i=n-1;i>=0;i--)
        {
            res[i] = post * res[i]; 
            post *= nums[i];
        }
        
        return res;
        
    }
};
