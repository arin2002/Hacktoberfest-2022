import java.util.*;
class transpose
{
    public static void main(String[] args)
    {
         Scanner sc=new Scanner(System.in);
         System.out.println("Enter the number of rows of matrix");
         int r=sc.nextInt();
         System.out.println("Enter the number of columns of a matrix");
         int c=sc.nextInt();
         int matrix[][]=new int[r][c];
         System.out.println("Enter the elements");  
         for(int i=0;i<r;i++)
           for(int j=0;j<c;j++)
             matrix[i][j]=sc.nextInt();
  
         int sol[][]=new int[c][r];
         for(int i=0;i<c;i++)
             for(int j=0;j<r;j++)
               sol[i][j]=matrix[j][i];
         
          System.out.println("Transpose of the matrix is:");
          for(int i=0;i<c;i++)
          {
                for(int j=0;j<r;j++)
                   System.out.print(sol[i][j]+" ");
                 System.out.println();
           }
    }
}
