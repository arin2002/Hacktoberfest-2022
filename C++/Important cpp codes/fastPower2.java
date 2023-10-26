// Using the Modulo operation
public class fastPower2 {
    public static long fastpower(long a, long b,int n)
    {
        long res=1;
        while(b>0)
        {
            if((b&1)!=0)
            {
                res=(res*a%n)%n;
            }
            a=(a%n*a%n)%n;
            b=b>>1; // b=b/2
        }
        return res;
    }
    public static void main(String[] args) {
        System.out.println(fastpower(3978432, 5,1000000007 ));
    }
}
