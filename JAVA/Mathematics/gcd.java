public class gcd {

    static int gcd(int a,int b){
        int res=Math.min(a,b);
        while(res>0) {
            if (a % res == 0 && b % res == 0) {
                break;
            }
                res--;


        }

        return res;
    }

    static int gcdEulcid(int a,int b){
while (a!=b) {
    if (a > b)
        a = a-b;
    else
        b = b-a;
}
return a;
    }


    static int gcdrec(int a,int b){
        if(b==0)
            return a;
        return gcdrec(b,a%b);
    }

    public static void main(String[] args) {
        System.out.println(gcdrec(30,6));
    }


}
