// Problem Link : https://leetcode.com/problems/set-mismatch/
class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        //  TC: O(N^2), SC: O(1);
        // vector<int> v;
        // sort(nums.begin(), nums.end());
        // for(int i = 0; i < nums.size() - 1; i++){
        //     if(nums[i] == nums[i + 1])
        //         v.push_back(nums[i]);
        // }
        // for(int i = 1; i <=nums.size(); i++){
        //     vector<int>::iterator it = find (nums.begin(), nums.end(), i);
        //     if(it == nums.end())
        //         v.push_back(i);
        // }
        // return v;

        // accumulate() is a built-in function in C++'s Standard Template Library. The function takes in a beginning iterator, an ending iterator, initial value, and (by default) computes the sum of the given initial value and the elements in the given range.

        // Unordered set is an associative container that contains a set of unique objects of type Key. Search, insertion, and removal have average constant-time complexity. Internally, the elements are not sorted in any particular order, but organized into buckets.

        //  TC: O(N), SC: O(N) (Sum Approach)

        // sum of elements on nums
        int initsum = accumulate(nums.begin(), nums.end(), 0);

        // put the element of nums into unordered_set to remove the duplicate number
        unordered_set<int> us;
        for (auto i : nums)
            us.insert(i);

        // sum of elements of the set
        int sum = accumulate(us.begin(), us.end(), 0);

        // difference of initialSum and sum will give us the duplicated number
        int duplicatenum = initsum - sum;

        // subtracting the sum of elements in set i.e. sum from the sum of the natural numbers will give us the missing number
        int n = nums.size();
        int missingnum = (n * (n + 1) / 2) - sum;
        return {duplicatenum, missingnum};
    }
};