void solve(int o,int c,string s,vector<string>&ans){
        if(o==0 and c==0){
            ans.push_back(s);
            return ;
        }
        if(o){
            string haha=s+"(";
            solve(o-1,c,haha,ans);
        }
        if(c>o){
            string haha=s+")";
            solve(o,c-1,haha,ans);
        }
        
    }
vector<string> generateParenthesis(int n) {
        int close=n,open=n;
        vector<string>ans;
        string s;
        
        solve(open,close,s,ans);
        return ans;
    }