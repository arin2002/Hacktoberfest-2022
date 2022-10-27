//LeetCode Daily Problem: 23/October/2022
//Problem Name: Set-Mismatch    Link: https://leetcode.com/problems/set-mismatch/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        vector<int> ans(2);
        
        int n = nums.size();
        
        //Finding Repeating element.
        for(int i=0; i<n-1; i++){
            if(nums[i]==nums[i+1]){
                ans[0] = nums[i];
                break;
            }
        }
        
        //Finding Not existing Element
        int notfound = 1;
        for(int i=0; i<n; i++){
            if(nums[i]==notfound){
                notfound++;
            }
        }
        
        ans[1] = notfound;
        
        return ans;
    }
};
