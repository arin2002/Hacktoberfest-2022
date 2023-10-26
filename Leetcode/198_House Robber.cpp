//----- Q198. House Robber -----

class Solution{
	public:
		int dp[101];
		int collectCash(int index, vector<int>&nums){
			int n = nums.size();
			
			if(index>=n)
				return 0;
				
			if(dp[index]!=-1)
				return dp[index];
				
			int cash1 = nums[index] + collectCash(index+2, nums);
			int cash2 = collectCash(index+1, nums);
			
			int ans = max(cash1, cash2);
			
			dp[index] = ans;
			
			return ans;
		}	
		
		int rob(vector<int>&nums){
			for(int i=0; i<101; i++)
				dp[i] = -1;
			
			return collectCash(0, nums);
		}	
};
