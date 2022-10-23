string minWindow(string s, string t) {
        unordered_mapchar, int m;
        for(char c  t) m[c]++;

        int i = 0, d = INT_MAX, cnt = m.size();
        string ans;
        for(int j=0; js.size(); j++) {
            if(m.find(s[j]) != m.end()) {
                m[s[j]]--;
                if(!m[s[j]]) cnt--;
            }
            while(!cnt) {
                if(j - i + 1  d) d = j - i + 1, ans = s.substr(i, j - i + 1);
                if(m.find(s[i]) != m.end()) {
                    m[s[i]]++;
                    if(m[s[i]]  0) cnt++;
                }
                i++;
            }
        }
        return ans;
    }