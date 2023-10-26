class Solution{
public:
    char findTheDifference(string s,string t){
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            ans -= s[i];
            ans += t[i];
        }
        ans += t[n];
        return ans;
    }
}