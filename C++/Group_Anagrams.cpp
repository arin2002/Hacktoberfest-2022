class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string> >mp;
        for(auto s:strs){
            map<char,int>fc;
            for(auto ch:s)
                fc[ch]++;
            mp[fc].push_back(s);
        }
        vector<vector<string>>res;
        for(auto it:mp)
            res.push_back(it.second);
        return res;
     
    }
};