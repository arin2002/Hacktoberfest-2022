
class Solution {
public:
    vector<string> ans;
    void solve(int n, string s, int l, int r){
        if(l==n &&r==n){
            ans.push_back(s);
            return;
        }
        if(l<n){
            string open=s;
            open.push_back('(');
            solve(n,open,l+1,r);
        }
        if(r<n && l>r){
            string close=s;
            close.push_back(')');
            
            solve(n,close,l,r+1);
        }
        
        
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        solve(n,s,0,0);
      
        
        return ans ;
    }
};