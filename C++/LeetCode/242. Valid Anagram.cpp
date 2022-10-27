class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.size()!=t.size())return false;
      unordered_map <char,int> freq;
      for(int i=0;i<s.size();i++)
        freq[s[i]]++;
      for(int i=0;i<t.size();i++){
        freq[t[i]]--;
         if(freq[t[i]]==0){
           freq.erase(t[i]);
         }
       }
       if(freq.size()!=0)
         return false;
        return true;
    }
};