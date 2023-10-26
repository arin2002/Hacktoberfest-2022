import java.util.*;
public  class  Anagram
{ static final int Char=256;
 
   public static void main(String []args]
                           { 
                             Scanner sc= new Scanner(System.in);
                              String s1=  sc.nextLine();
                              String  s2= sc.nextLine();
                              boolean   ans=Anagram(s1,s2);
                             if( ans== true)
                             {
                               System.out.print("Anagram");
                             }
                             else
                             {
                               System.out.println("Not Anagram");
                             }
                           }
                            public  static  boolaen  Anagram( String S1,String S2)
                           {
                             if(S1.length()!=S2.length())
                             {
                                return false;
                             }
                             int [] count= new int[Char];
                             int i=0;
                             for( i=0;i<S1.length();i++)
                             {
                                count[S1.charAt(i)]++;
                               count[S2.charAt(i)]--;
                             }
                              for(i=0;i<Char;i++)
                              {
                                 if(count[i]!=0)
                                 { return false;
                                 }
                              }
                             return true;
                           }
                           }
