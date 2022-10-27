public class Main {
    public static void main(String args[]) {
        primeFactor(35);
    }

    static void primeFactor(int n) {
        int spf[] = new int [100];

        for(int i=2; i<=n; i++) {
            spf[i] = i;
        }

        for(int i=2; i*i<=n; i++) {
            if(spf[i] == i) {
                for(int j=i*i; j<=n; j+=i) {
                    if(spf[j] == j) {
                        spf[j] = i;
                    }
                }
            }
        }

        while(n != 1) {
            System.out.print(spf[n] + " ");
            n /= spf[n];
        }
    }
}
