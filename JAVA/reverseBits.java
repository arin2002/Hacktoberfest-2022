import java.lang.*;

public class Main {
    public static void main(String args[]) {
        bitprints(11);
    }

    static void bitprints(int n) {

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

        System.out.print(rev);
    }
}
