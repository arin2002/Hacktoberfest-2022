import java.io.*;
import java.util.Scanner;

class perfectSqaure{
  public static void main(String[] args) {
    System.out.println("Enter any Number");
    Scanner sc = new Scanner(System.in);
    double num=sc.nextDouble(); 
    double sqrt=Math.sqrt(num);
    if(sqrt-Math.floor(sqrt)==0)System.out.println("Perfect Square Number");
    else System.out.println("Not a perfect square");
   
    



}
}