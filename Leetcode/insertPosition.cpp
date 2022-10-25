//https://leetcode.com/problems/search-insert-position/    
    //Time complexity:
    // O(logn)

    // Space complexity:
    // O(1)

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<j){
            int mid=(i+j)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]>target)
            j=mid-1;
            else
            i=mid+1;
        }
        if(nums[i]>=target)
        return i;
        else return i+1;
    }
};