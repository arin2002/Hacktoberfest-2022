public class Main {
    public static void main(String args[]) {
        int n = 1000;

        for(int i=1; i<10; i++) {
            dfs(i, n);
        }
    }

    static void dfs(int i, int n ) {

        if(i > n) {
            return;
        }

        System.out.println(i);

        for(int j=0; j<10; j++) {
            dfs(10*i + j, n);
        }
    }
}
