import java.util.*;
public class leftmost{
    static final int Char =256;
    public static void main(String[] args)
    { 
       Scanner sc = new Scanner (System.in);
       String s= sc.nextLine();
       int  pos= LM(s);
      System.out.println(s.charAt(pos));
      
    }
  public static int LM(String S)
  {
     int []count=new int[Char];
      int i=0;
    for( i=0;i<S.length();i++)
    {
      count[S.charAt(i)]++;
    }
     for( i=0;i<S.length();i++)
     {
       if(count[i]>1)
       {
          return i;
       }
     }
    return -1;
  }
}
       
