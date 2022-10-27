/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

Solution:
Sorted the vector in C++ and checking alternate elements, comparing to the element following it. Return element which does not satisfy the comparison. 
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        if(nums.size()==1)
            return nums[0];
        while(i<nums.size())
        {
            if(nums[i]==nums[i+1])
                i=i+2;
            else 
                return nums[i];
        }
        return 0;
        
    }
};