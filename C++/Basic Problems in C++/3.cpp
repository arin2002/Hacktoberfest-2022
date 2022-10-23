bool isValid(string s) {
        stack<char>st;
        
        unordered_map<char,int>m={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
        
        for(auto ch:s)
        {
            if(m[ch]<0)
                st.push(ch);
            else
            {
                if(st.empty())
                    return false;
                else
                {
                    char top=st.top();
                    st.pop();
                    
                    if(m[top]+m[ch]!=0)
                        return false;
                }
            }
        }
        if(st.empty())
            return true;
        else
            return false;
        
    }