// leetcode qn https://leetcode.com/problems/koko-eating-bananas/

class Solution {
public:
    bool feasible(vector<int>& piles, int k, int h) {
        int t=0;
        
        for(int i=0; i<piles.size(); i++) {
            int x=piles[i]/k;
            if(piles[i]%k==0) {
                t+=x;
            }
            else{
                t+=x+1;
            }
            if(t>h) {
                return false;
            }
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int left=1;
        int max=0;
        
        for(int i=0; i<piles.size(); i++){
            if(piles[i]> max)
                max =piles[i];
        }
        int right =max;
        
        while(left< right) {
            int mid = left + (right-left)/2;
            
            if(feasible(piles, mid, h))
                right=mid;
            else
                left = mid+1;
            
        }
        return left;
        
    }
};