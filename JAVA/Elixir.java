class Sol {
    int maxFrequency(String s) {
        int ans=0, n=s.length();
        
        String sub = "";
        for(int i=1; i<n; ++i) {
            // System.out.println(s.substring(0,i) + " " + s.substring(n-i,n));
            if(s.substring(0,i).equals(s.substring(n-i,n))) {
                sub = s.substring(0,i);
                break;
            }
        }
        
        if(sub == "") return 1;
        
        int l=0;
        int r=sub.length()-1;
        while(r<n) {
            if(s.substring(l,r+1).equals(sub)) ans++;
            
            l++;
            r++;
        }
        return ans;
    }
}
