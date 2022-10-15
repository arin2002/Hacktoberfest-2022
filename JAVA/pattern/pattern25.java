package JAVA.pattern;

public class pattern25 {
    public static void main(String[] args) 
    {

        int i,a;

        for (i=1;i<=3;i++) 
        {
            for (a=1;a<=i;a++) 
            {
                System.out.print(" ");
            }
            for(a=i;a<=4;a++) 
            {
                System.out.print("* ");
            }
            System.out.println();
        }
        {

        for (i=1;i<=4;i++) 
        {
            for (a=i;a<=4;a++) 
            {
                System.out.print(" ");
            }
            for(a=1;a<=i;a++) 
            {
                System.out.print("* ");
            }
            System.out.println();
            }
        }
        }
}
