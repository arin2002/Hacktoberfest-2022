/* 
If B<=0 or H<=0, the output should be "java.lang.Exception: Breadth and height must be positive" without quotes.
If both values are greater than zero, then the main method must output the area of the parallelogram. Otherwise, print "java.lang.Exception: Breadth and height must be positive" without quotes.

Platform: HackerRank

*/

import java.io.*;
import java.util.*;
class Static_Block{
    static boolean flag = false;
    static int B,H;
    
    static{
    Scanner sc = new Scanner(System.in);
    B = sc.nextInt();
    H = sc.nextInt();
    if(B>0 && H>0)
    {
        flag = true;
    }
    else{
        System.out.println("java.lang.Exception: Breadth and height must be positive");
    }
    }
    public static void main(String args[])
    {
        if(flag){
			int area=B*H;
			System.out.print(area);
		}
    }
}