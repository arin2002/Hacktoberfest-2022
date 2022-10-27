// Rotate Array
// Given an array, rotate the array to the right by k steps, where k is non-negative.

// Example 1:
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]

class Solution {
public:
    void rev(vector <int> &nums,int k){
        int s=0,e=k-1;
        while(s<=e){
            swap(nums[e],nums[s]);
            s++;e--;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();//Calculating the appropriate size of k so as to prevent any index out of bounds
        
        reverse(nums.begin(),nums.end());// reversing the entire array
        
        rev(nums,k);// reversing first k elements of the array
        
        reverse(nums.begin()+k,nums.end());//reversing reset of the (nums.size()-k) elements of the array
    }
};
