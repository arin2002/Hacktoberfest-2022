package JAVA.pattern;

public class pattern23 {
    public static void main(String[] args) 
    {
            int x,i;

        for (x=1;x<=3;x++) 
        {
            for (i=x;i<=3;i++) 
            {
                System.out.print(" ");
            }
            for(i=1;i<=x;i++) 
            {
                System.out.print("* ");
            }
            System.out.println();

        }
        {

            for (x=1;x<=4;x++) 
            {
            for (i=1;i<x;i++) 
            {
                System.out.print(" ");
            }
            for(i=x;i<=4;i++) 
            {
                System.out.print("* ");
            }
            System.out.println();
            } 
        }
        
    }
}
