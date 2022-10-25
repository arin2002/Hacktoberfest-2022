void make_lps(string& s, int* lps) {
    int len=0, i=1;
    lps[0]=0;
    while(s[i]){
        if(s[i]==s[len])
            lps[i++]=++len;
        else if(len>0)
            len=lps[len-1];
        else
            lps[i++]=0;
    }
}

bool kmp(string& s, string& pat) {
    int lps[pat.length()];
    make_lps(pat, lps);
    int i=0, j=0;
    while(s[i]){
        if(s[i]==pat[j]){
            i++, j++;
            if(!pat[j])
                return true;
        }
        else if(j>0)
            j=lps[j-1];
        else
            i++;
    }
    return false;
}
