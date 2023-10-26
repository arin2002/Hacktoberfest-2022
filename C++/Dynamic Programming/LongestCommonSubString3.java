public class Main {
    public static void main(String[] args) {
        String A ="house";
        String B ="mougse";
        String C ="trouser";
        
        int n = A.length();
        int m = B.length();
        int o = C.length();
        
        int[][][] dp  = new int[n+1][m+1][o+1];
        int max = 0;
        int maxI=0;
        int maxJ=0;
        int maxK=0;
        for(int i=0; i<=n;i++){
            for(int j=0; j<=m;j++){
                for(int k=0; k<=o;k++){
                    if(i==0||j==0||k==0){
                        dp[i][j][k]=0;
                    }
                    else if(A.charAt(i-1)==B.charAt(j-1) && B.charAt(j-1)==C.charAt(k-1)){
                        dp[i][j][k] = 1+dp[i-1][j-1][k-1];
                    }
                    else{
                        dp[i][j][k]=0;
                    }
                    if(max<dp[i][j][k]){
                        max=dp[i][j][k];
                        maxI=i;
                        maxJ=j;
                        maxK=k;
                    }
                }
            }
        }
        System.out.println(max);
    
        int p=maxI;
        int q=maxJ;
        int r=maxK;
        char[] s = new char[max];
        int count = max-1;
        while(p>0 && q>0 && r>0){
            if(A.charAt(p-1)==B.charAt(q-1) && B.charAt(q-1)==C.charAt(r-1)){
                s[count--]=A.charAt(p-1);

                p--;
                q--;
                r--;
            }
            else{
                p--;
                q--;
                r--;
            } 
        }
        System.out.print(s);
     }
}
