bool isPalindrome(string S)
    {
        if(S.size() == 0)
            return true;

        for (int i = 0; i < S.length() / 2; i++) {
            if (S[i] != S[S.length() - i - 1]) {
                return false;
            }
        }
        return true;
    }
    string longestPalindrome(string s) {
        
        string ans = "";
        string temp = "";

        if(s.size() == 0 || s.size() == 1)
            return s;
        
        if(s.size() == 2)
        {
            if(s[0] == s[1])
                return s;
            
            string fin = "";
            fin += s[0];
            return fin;
        }
        temp = "";
        for(int i = 1 ; i < s.size() - 1; i++)
        {   
            temp += s[i];
            int mov = 1;
            while(  i - mov >= 0 && i + mov < s.size() && s[i - mov] == s[i + mov]  )
            {
                temp = s.substr(i-mov,2*mov + 1);
                mov++;
            }
            if(temp.size() > ans.size())
            {
                ans = temp;
            }
            temp = "";
        }

        temp = "";
        for(int i = 0 ; i < s.size() - 1 ; i++)
        {
            int l = i;
            int r = i + 1;
            int mov = 0;
            while(l - mov >= 0 && r + mov < s.size() && s[l - mov] == s[r + mov])
            {
                temp = s.substr(l-mov,r - l + 2*mov + 1);
                mov++;
            }
            if(temp.size() > ans.size())
            {
                ans = temp;
            }
            temp = "";
        }
        return ans;
    }
