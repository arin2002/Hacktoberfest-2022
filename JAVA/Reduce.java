import java.lang.*;

public class Main {
    public static void main(String args[]) {
        System.out.println(reduceEff2(15));
    }

    static int reduceEff(int n) {
        int ans = 0;

        while(n != 1) {
            if((n&1) == 0) {
                n /= 2;
            } else if( n == 3) {
                n -= 1;
            } else if( n%4 == 1) {
                n -= 1;
            } else if( n%4 == 3) {
                n += 1;
            }

            ans++;
        }

        return ans;
    }

    static int reduceEff2(int n) {
        int ans = 0;

        while(n != 1) {
            if((n&1) == 0) {
                n /= 2;
            } else if( n == 3) {
                n -= 1;
            } else if( (n&3) == 1) { // 4x + 1 in binary - _________01      3 - 000000000011
                n -= 1;
            } else if( (n&3) == 3) { // 4x + 3 in binary - _________11
                n += 1;
            }

            ans++;
        }

        return ans;
    }
}
