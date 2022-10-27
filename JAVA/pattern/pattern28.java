package JAVA.pattern;

public class pattern28 {
    public static void main(String[] args) {

        int i,a;

            a=1;
        for (i=4;i>=3;i--) 
        {
            for(a=i;a<4;a++)
            {
             System.out.print(a);
            }
            for (a=4;a>=i;a--) 
            {
             System.out.print(a);
            }
            System.out.println();
        }
}
}
