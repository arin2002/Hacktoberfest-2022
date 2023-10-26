class Sol {
    public static int build_bridges(String str1 , String str2) {
        int m = str1.length();
        int n = str2.length();
        
        char x[] = str1.toCharArray();
        char y[] = str2.toCharArray();
        
        return find(x, y, m, n);
    }
    
    static int find(char x[], char y[], int m, int n) {
        int l[][] = new int [m+1][n+1];
        
        for(int i=0; i<=m; i++) {
            for(int j=0; j<=n; j++) {
                if(i == 0 || j == 0 ) l[i][j] = 0;
                
                else if(x[i-1] == y[j-1]) {
                    l[i][j] = 1 + l[i-1][j-1];
                } else {
                    l[i][j] = Math.max(l[i-1][j], l[i][j-1]);
                }
            }
        }
        
        return l[m][n];
    }
    
    // static int find(char x[], char y[], int m, int n) {
    //     if(m == 0 || n == 0) return 0;
        
    //     if(x[m-1] == y[n-1]) {
    //         return 1 + find(x, y, m-1, n-1);
    //     } else {
    //         return Math.max(find(x, y, m-1, n), find(x, y, m, n-1));
    //     }
    // }
}
