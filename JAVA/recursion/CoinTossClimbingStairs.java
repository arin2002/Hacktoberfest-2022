public class Main {
    public static void main(String args[]) {
        String ans="";
        int n=5;
        climbStairs(n, ans);
    }

    static void coinToss(int n, String ans) {
        if(n == 0 ) {
            System.out.println(ans);
            return;
        }
        coinToss(n-1, ans+"H");
        coinToss(n-1, ans+"T");
    }

    static void climbStairs(int n, String ans) {
        if(n == 0) {
            System.out.println(ans);
            return;
        }
        if(n < 0) {
            return;
        }

        climbStairs(n-1, ans+"1");
        climbStairs(n-2, ans+"2");
        climbStairs(n-3, ans+"3");
    }
}