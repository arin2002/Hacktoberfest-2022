# Returns true if there exists a sublist of list `nums[0…n]` with the given total
def subsetSum(nums, n, total):
 
    # return true if the sum becomes 0 (subset found)
    if total == 0:
        return True
 
    # base case: no items left or sum becomes negative
    if n < 0 or total < 0:
        return False
 
    # Case 1. Include the current item `nums[n]` in the subset and recur
    # for remaining items `n-1` with the remaining sum `total-nums[n]`
    include = subsetSum(nums, n - 1, total - nums[n])
 
    # return true if we get subset by including the current item
    if include:
        return True
 
    # Case 2. Exclude the current item `nums[n]` from the subset and recur for
    # remaining items `n-1`
    exclude = subsetSum(nums, n - 1, total)
 
    # return true if we get subset by excluding the current item
    return exclude
 
 
# Returns true if given list `nums[0…n-1]` can be divided into two
# sublists with equal sum
def partition(nums):
 
    total = sum(nums)
 
    # return true if the sum is even and the list can be divided into
    # two sublists with equal sum
    return (total & 1) == 0 and subsetSum(nums, len(nums) - 1, total/2)
 
 
if __name__ == '__main__':
 
    # Input: a set of items
    nums = [7, 3, 1, 5, 4, 8]
 
    if partition(nums):
        print('Set can be partitioned')
    else:
        print('Set cannot be partitioned')