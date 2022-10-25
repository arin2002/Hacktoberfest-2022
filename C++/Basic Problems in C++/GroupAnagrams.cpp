// Problem link - https://leetcode.com/problems/group-anagrams/description/

/*Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.*/


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> c = strs;
        
        int index=0;
        for(int i=0;i<strs.size();i++)
            sort(strs[i].begin(),strs[i].end());
        
        
        vector<vector<string>> ans(strs.size());
        unordered_map<string,int> umap;
        for(int i=0;i<strs.size();i++){
            if(umap.find(strs[i])==umap.end()){
                umap[strs[i]]=index;
                ans[index].push_back(c[i]);
                index++;
            }
            else ans[umap[strs[i]]].push_back(c[i]);
        }
        
        ans.resize(index);    
        return ans;
    }
};