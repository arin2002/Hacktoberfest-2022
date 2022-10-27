// Problem link: https://leetcode.com/submissions/detail/826032037/

bool mysort(pair<int, string> &p1, pair<int, string> &p2){
    if(p1.first == p2.first){
        return p1.second <= p2.second;
    }
    return p1.first > p2.first;
}
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;
        map<string, int> mp;
        for(auto s: words){
            mp[s]++;
        }
        vector<pair<int,string>> vp;
        for(auto p: mp){
            vp.push_back({p.second, p.first});
        }
        sort(vp.begin(), vp.end(), mysort);
        // reverse(vp.begin(), vp.end());
        for(int i=0; i<k;  i++){
            ans.push_back(vp[i].second);
        }
        return ans;
    }
};
