import java.util.Scanner;
public class Even {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in); //user input
    int n;
    while (true)
    {
      System.out.print("Enter a number: ");
      n = scan.nextInt();
      if(n >= 2)
      {
        break;  //if user enters n less than 2, it will not enter the loop and will return error message.
      }
      System.out.println("Error. Number should be at-least 2.");         }
    int sum = 0;
    for(int i = 2; i <= n; i=i+2) //loop will return sum upto user input-> n even integer
    {
      sum += i;//it will add all the even intgers in the range.
    }
    System.out.println("Sum of all even numbers upto " + n + " is " + sum);
  }
} 
