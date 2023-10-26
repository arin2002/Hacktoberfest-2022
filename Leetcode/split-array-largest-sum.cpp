// leetcode problem https://leetcode.com/problems/split-array-largest-sum/

class Solution {
public:
    bool feasible(vector<int>& nums,int m, int mid) {
        int t=1;
        int sum=0;
        for(int i=0; i<nums.size(); i++) {
            sum+=nums[i];
            if(sum>mid) {
                sum=nums[i];
                t++;
                if(t>m) {
                    return false;
                }
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int m) {
        int sum=0;
        int max=0;
        for(int i=0; i<nums.size(); i++) {
            sum+=nums[i];
            if(max<nums[i])
                max=nums[i];
        }
        int left=max;
        int right=sum;
        
        while(left< right) {
            int mid = left + (right -left)/2;
            if(feasible(nums,m,mid)) {
                right = mid;
            } 
            else
                left=mid +1;
        }
        return left;
    }
};