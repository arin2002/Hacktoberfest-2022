class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        long long c=0;
        int f=0;
        int x=0;
        long long ans=1;
        for(int i=0;i<nums.size();){
            if(nums[i]==1){
                int j=i+1;
                f=1;
                while(j<nums.size() && nums[j]!=1){
                    c++;
                    x++;
                    j++;
                    // f=1;
                }
                if(j==nums.size()){
                        c-=x;
                }
                
                x=0;
                i=j;
            }else{
                i++;
            }
            ans=(ans*(c+1))%1000000007;
            c=0;
            

        }
        if(f==0)return 0;
        return ans;
    }
};
