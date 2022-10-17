import java.util.Scanner;
public class addition_subtraction_matrix
{
   public static void main(String[] args)
   {
      Scanner sc = new Scanner(System.in);
      System.out.println("Please enter number of rows : ");
      int row = sc.nextInt();
      System.out.println("Please enter number of columns : ");
      int col = sc.nextInt();
      int[][] x = new int[row][col];
      int[][] y = new int[row][col];
      System.out.println("Please enter first matrix - ");
      for(int m = 0; m < row; m++)
      {
         for(int n = 0; n < col; n++)
         {
            x[m][n] = sc.nextInt();
         }
      }
      System.out.println("Please enter second matrix - ");
      for(int m = 0; m < row; m++)
      {
         for(int n = 0; n < col; n++)
         {
            y[m][n] = sc.nextInt();
         }
      }
          System.out.println("Enter 1 for Addition  2 for Subtraction of matrix");
     int choice=sc.nextInt();

     switch(choice)
     {
       case 1 :
      int[][] a = new int[row][col];
      for(int m = 0; m < row; m++)
      {
         for(int n = 0; n < col; n++)
         {
            // matrix addition in java
            a[m][n] = x[m][n] + y[m][n];
         }
      }
      System.out.println("The addition of two matrices is - ");
      for(int m = 0; m < row; m++)
      {
         for(int n = 0; n < col; n++)
         {
            System.out.print(a[m][n] + " ");
         }
         System.out.println();
      }
 
   
  break;
  
  case 2 :
  int[][] s = new int[row][col];
      for(int m = 0; m < row; m++)
      {
         for(int n = 0; n < col; n++)
         {
            // matrix addition in java
            s[m][n] = x[m][n] - y[m][n];
         }
      }
      System.out.println("The addition of two matrices is - ");
      for(int m = 0; m < row; m++)
      {
         for(int n = 0; n < col; n++)
         {
            System.out.print(s[m][n] + " ");
         }
         System.out.println();
      }
   
  break;

default :
System.out.println(" Invalid case");
break;
}
}
}
