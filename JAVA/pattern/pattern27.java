package JAVA.pattern;

public class pattern27 {
    public static void main(String[] args) 
    {
            int x,i;

        for (x=1;x<=2;x++) 
        {
            for (i=1;i<=x;i++) 
            {
                System.out.print(i);
            }
            for(i=x-1;i>=1;i--) 
            {
                System.out.print(i);
            }
            System.out.println();
            }
        
    }
}
