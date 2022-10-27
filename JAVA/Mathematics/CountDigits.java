




import java.math.*;
    public class CountDigits{

        static int countDigits(int x){
            int res=0;
            while(x>0){
                x=x/10;
                res++;
            }
            return res;
        }


        static int countrec(int x){
            int res=0;
            if(x==0){
                return res;
            }
            return 1+ countrec(x/10);

        }

        static int countlog(int x){
            return (int) Math.floor(Math.log10(x)+1);
        }
        public static void main(String[] args) {

            System.out.println(countlog(45452));
        }
    }


