public class divisor {


    //Naive method
    static void divisor(int n){
        for (int i=1;i<=n;i++){
            if(n%i==0){
                System.out.println(i);
            }
        }
    }



    public static void main(String[] args) {

        divisor(100);
    }
}
