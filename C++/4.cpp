void solve(vector<vector<int>>&ans,vector<int>&temp,vector<int>&nums,vector<int>&m){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(m[i]==0){
                m[i]=1;
                temp.push_back(nums[i]);
                solve(ans,temp,nums,m);
                m[i]=0;  
                temp.pop_back();
            }    
        
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        vector<int>m(nums.size(),0);
        solve(ans,temp,nums,m);
        
        return ans;
        
        
    }