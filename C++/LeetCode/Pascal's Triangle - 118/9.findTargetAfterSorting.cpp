class Solution {
public:
    int lower(vector<int>& arr , int target) {
        int s=0,e=arr.size()-1,ans=-1;
        while(s<=e) {
            int mid = (s+e)/2;
            
            if(arr[mid]<target) {
                s=mid+1;
            }
            else {
                // ans=mid;
                e=mid-1;
            }
        }
        return s;
    }
    int upper(vector<int>& arr , int target) {
        int s=0,e=arr.size()-1,ans=-1;
        while(s<=e) {
            int mid = (s+e)/2;
            
            if(arr[mid]<=target) {
                // ans=mid;
                s=mid+1;
            }
            else {
                e=mid-1;
            }
        }
        return s;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int l = lower(nums,target);
        int u =upper(nums,target);
        cout<<l<<" "<<u<<endl;
        vector<int> ans;
        
        if(l==u)
            return ans;
        // if(nums[l]!=target) {
        //     return ans;
        // }
        for(int i=l; i<u; i++) {
            // if(i<nums.size())
                ans.push_back(i);
            
        }
        return ans;
        
        
        
    }
};