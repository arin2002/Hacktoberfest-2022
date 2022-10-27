import java.lang.*;

public class Main {
    public static void main(String args[]) {
        System.out.println(palindromeBinary(22));
    }

    static int palindromeBinary(int n) {
        int len = 1;
        int count = 1;

        while(count < n) {
            len++;
            int curlen = (1 << (len-1) / 2);
            count += curlen;
        }

        count -= (1 << (len-1) / 2);
        int offset = n - count - 1;

        int ans = (1 << (len-1));
        ans |= (offset << (len/2));

        int rev = reverseBits2(ans >> (len/2));

        ans |= rev;

        return ans;
    }

    static int reverseBits2(int n) {
        int res = 0;

        while(n != 0) {
            int lb = (n & 1);

            res |= lb;

            res <<= 1;
            n >>= 1;
        }
        res >>= 1;
        return res;
    }

    static int reverseBits(int n) {

        boolean flag = false;
        int rev = 0, j = 0;

        for(int i=31; i>=0; i--) {
            int mask = (1<<i);

            if(flag) {
                if((n&mask) == 0) {
                    // System.out.print(0);
                } else {
                    // System.out.print(1);
                    int rmask = (1<<j);
                    rev |= rmask;
                }
                j++;
            } else {
                if((n&mask) == 0) {
                    
                } else {
                    flag = true;
                    // System.out.print(1);

                    int rmask = (1<<j);
                    rev |= rmask;
                    j++;
                }
            }
        }

        // System.out.print(rev);
        return rev;
    }
}
