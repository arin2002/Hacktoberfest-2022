
# Problem link - https://github.com/arin2002/Coding-questions/tree/main/PYTHON

# 189. Rotate Array

# Given an array, rotate the array to the right by k steps, where k is non-negative.

class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
      
        n = len(nums)
        if(k>=n):
            k=k%n
        ls = (nums[n-k:]+nums[:n-k]).copy()
        nums.clear()
        nums.extend(ls)
       