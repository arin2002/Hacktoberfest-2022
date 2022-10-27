
class Solution {
    
    static int multiply(int a, int b) {
        return (a%1003 * b%1003)%1003;
    }
    
    static int countWays(int n, String s){
        StringBuilder s1 = new StringBuilder();
        StringBuilder s2 = new StringBuilder();
        String str1 = "", str2 = "";
        
        for(int i=0; i<n; i++) {
            if(i%2 == 0) {
                s1.append(s.charAt(i));
            } else {
                s2.append(s.charAt(i));
            }
        }
        str1 = s1.toString();
        str2 = s2.toString();
        n = str1.length();
        
        int dpt[][] = new int[n][n];
        int dpf[][] = new int[n][n];
        int m = 1003;
        
        for(int gap=0; gap<n; gap++) {
            for(int i=0,j=gap; j<n; i++,j++) {
                if(gap == 0) {
                    dpt[i][j] = str1.charAt(i) == 'T' ? 1 : 0;
                    dpf[i][j] = str1.charAt(i) == 'F' ? 1 : 0;
                } else {
                    for(int k=i; k<j; k++) {
                        char operator = str2.charAt(k);
                        int lt = dpt[i][k], rt = dpt[k+1][j], lf = dpf[i][k], rf = dpf[k+1][j];
                        
                        if(operator == '&') {
                            dpt[i][j] += multiply(lt, rt);
                            dpf[i][j] += multiply(lt, rf) + multiply(lf,rt) + multiply(lf,rf);
                        } else if(operator == '|') {
                            dpt[i][j] += multiply(lt, rt) + multiply(lt, rf) + multiply(lf, rt);
                            dpf[i][j] += multiply(lf, rf);
                        } else {
                            dpt[i][j] += multiply(lt, rf) + multiply(lf, rt);
                            dpf[i][j] += multiply(lf, rf) + multiply(lt, rt);
                        }
                    }
                }
            }
        }
        
        return dpt[0][n-1]%m;
    }
}
