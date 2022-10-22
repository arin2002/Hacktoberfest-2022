
import java.util.random.*;
import java.util.Scanner;
public class primeNo {
//Naive approach
    static boolean CheckPrime(int x){
        boolean flag=false;
       int i=2;
        while(i<x/2){
            if(x%i==0) {
                flag = true;
            }
            i++;
        }
        return flag;

    }

//Efficient method underroot time
     static boolean CheckPrimeopt(int  n){

     if (n==1)
         return false;
     for (int i=2;i*i<=n;i++)
         if (n%i==0)
             return false;
     return true;

    }
//More Efficient method by eleminating multiple of 2 and 3
    static boolean isPrime(int n){
        if (n==1)
            return false;
        if (n==2||n==3)
            return true;
        if(n%2==0 || n%3==0) //eleminating multiple of 2 and 3
            return false;
        else
            for (int i=5;i*i<=n;i+=6) // check if i or i+2 divides n if true then  it is not a prime number else prime number
                if(n%i==0  || n%(i+2)==0)
                    return false;
        return true;
    }
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        System.out.print("Enter No to Check Prime of Not: ");
        int x=scan.nextInt();
        if(!isPrime(x)){
            System.out.println(x+" is Not a Prime No.");
        }else{
            System.out.println(x+" is a Prime No.");
        }
    }
}
