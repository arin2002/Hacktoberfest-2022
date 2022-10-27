#include<bits/stdc++.h>
using namespace std;


class Solution {
    void permutations(vector<vector<int>>&ans, vector<int>&nums, int idx){
        if(idx == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i = idx; i < nums.size(); i++){
            swap(nums[i], nums[idx]);
            permutations(ans, nums, idx+1);
            swap(nums[i], nums[idx]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permutations(ans, nums, 0);
        return ans;
    }
};
// class Solution {
//     void permutations(vector<vector<int>>&ans, vector<int> &nums,int idx){
//         if(idx==nums.size()){
//             ans.push_back(nums);
//             return;
//         }
//         for(int i=idx;i< nums.size();i++){
//             swap(nums[idx],nums[i]);
//             permutations(ans, nums,idx+1);
//             swap(nums[idx],nums[i]);
//         }
//     }
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans;
//         permutations(ans, nums,0);
//         return ans;
//     }
// };

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>nums = {1, 2, 3};
    Solution obj;
    vector<vector<int>> ans = obj.permute(nums);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5);
    return 0;
}