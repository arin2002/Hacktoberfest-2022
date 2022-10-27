public class Main {
    public static void main(String args[]) {
        String ans ="";
        parenthesis(3,0,0,ans);
    }

    static void parenthesis(int n, int open, int close, String ans) {
        if(open == n && close == n) {
            System.out.println(ans);
            return;
        }
        if(open > n || close > open) {
            return;
        }

        parenthesis(n, open+1, close, ans+"(");
        parenthesis(n, open, close+1, ans+")");
    }
}