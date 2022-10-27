package JAVA.pattern;

public class pattern17 {
    public static void main(String[] args)
    {
        int i,a,z;
        z=0;
        for(a=1;a<=4;a++)
        {
        
        for(i=1;i<=a;i++)
        {
            System.out.print(z%2);
            z=z+1;
        }
        System.out.println();
        
        }
    }
}
