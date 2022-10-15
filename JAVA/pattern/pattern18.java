package JAVA.pattern;

public class pattern18 {
    public static void main(String[] args)
    {
        int i,a,z;

        for(a=1;a<=4;a++)
        {
            z=a;
        for(i=1;i<=a;i++)
        {
            System.out.print(z%2);
            z=z+1;
        }
        System.out.println();
        
        }
    }
}
