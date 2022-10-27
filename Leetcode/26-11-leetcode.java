class Solution {
    public boolean checkSubarraySum(int[] nums, int k) {
        Set<Integer> modSet=new HashSet();
        int currSum = 0, prevSum=0; 
		//when we add prevSum=0 in set it will actually check if currSum is divided by k 
        for(int n : nums) {
            currSum += n;
            if(modSet.contains(currSum%k)) {
                return true;
            }
            currSum %=k;
            modSet.add(prevSum);
            prevSum = currSum;
        }
        return false;
    }
}
