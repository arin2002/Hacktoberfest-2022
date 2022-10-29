
class Solution {
public:
    int countDistinctIntegers(vector<int>& v) {
        vector<int>v1;
        set<int> s1;
        int n=v.size();
        for(int i=0;i<n;i++){
            string s=to_string(v[i]);
             for (int i = 0; i < s.size() / 2; i++)
             swap(s[i], s[s.size() - i - 1]);
            int temp=stoi(s);
            v1.push_back(v[i]);
            v1.push_back(temp);
        }
        
        for(int i=0;i<v1.size();i++){
            s1.insert(v1[i]);
        }
        
        return s1.size();


    }
};