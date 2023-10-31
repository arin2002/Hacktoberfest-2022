class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int k = size(words) * size(words[0]);
        int n = s.size();
        int len = size(words[0]);
        unordered_map<string, int> og;
        for(string &i: words){
            og[i]++;
        }
        int sz = og.size();
        vector<int> ans;
        int total = size(words);
        for(int start = 0; start < len; start++){
            int curr = 0;
            unordered_map<string, int> mp;
            bool ok = false;
            for(int i=start, j = start; i + len - 1 < n; i += len){
                string c;
                for(int k=0;k<len;k++){
                    c += s[i+k];
                }
                mp[c]++;
                if(og.count(c)){
                    if(mp[c] == og[c]){
                        curr++;
                    }
                    else if(mp[c] == og[c] + 1){
                        curr--;
                    }
                }
                if(i + len - j == k){
                    string x;
                    for(int k=0;k<len;k++){
                        x += s[j+k];
                    }
                    if(curr == sz){
                        ans.push_back(j);
                    }
                    mp[x]--;
                    if(og.count(x)){
                        if(mp[x] == og[x]){
                            curr++;
                        }
                        else if(mp[x] == og[x] - 1){
                            curr--;
                        }
                    }
                    j += len;
                }
            }
        }
        return ans;
    }
};
