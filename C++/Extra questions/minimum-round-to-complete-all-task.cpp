// leetcode https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        int n=tasks.size();
        for(int i=0; i<n; i++) {
            if( mp.find(tasks[i]) == mp.end()) {
                mp[tasks[i]]=1;
            }
            else {
                mp[tasks[i]]++;
            }
        }
        int count=0;
        for(auto x: mp) {
            if((x.second)==1) {
                return -1;
            }
            if((x.second)%3==0) {
                count+= (x.second)/3;
            }
            else {
                count+=(x.second)/3 +1;
            }
        }
        return count;
    }
};