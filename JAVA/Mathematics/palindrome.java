
public class palindrome {

    static boolean checkPalindrome (int x){
       boolean flag=false;
        int rev=0;
        int y=x;
        while(x>0){
            rev=rev*10+x%10;
            x=x/10;
        }
        if(y==rev){
            flag=true;
        }
return flag;
    }

    public static void main(String[] args) {
        if(checkPalindrome(1214)){
            System.out.println("Palindrome No");
        }else {
            System.out.println("Not a Palindrome no.");
        }
    }

}
