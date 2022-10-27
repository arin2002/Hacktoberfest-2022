/*
Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.

Platform: Leetcode: 29
*/
public class Main
{
    public static int divide(int dividend, int divisor) {
        int val = 0;
        int val1 = 0;
        boolean isDividendNeg = false, isDivisorNeg = false,isLong = false;
        if(dividend == Integer.MIN_VALUE)
        {
            long valLong = (dividend<0)? (long)-dividend: dividend;
            System.out.println("Dividend1: "+ (-valLong));
            dividend = dividend-1;
            isLong = true;
        }
        if(dividend<0)
        {
            dividend = -dividend;
            System.out.println("Dividend: "+dividend);
            isDividendNeg = true;
        }
        if(divisor<0)
        {
            divisor = Math.abs(divisor);
            System.out.println("Divisor: "+divisor);
            isDivisorNeg = true;
        }
        while(val<=dividend){
            {
                if(val>=dividend)
                {
                    break;
                }
                // if(divisor < check)
                // {
                val = val + divisor;
                val1++;
                //}
            }
        }
        if(isLong==true)
        {
            ++val1;
        }
        if(val>dividend)
        {
            --val1;
        }
        // if()
        // {
        //     return val1;
        // }
        // val1 = (isDividendNeg==true && isDivisorNeg==true) ? val1 : -val1;
        // val1 = (isDividendNeg==false && isDivisorNeg==false) ? val1 : -val1;
        if(val1<Integer.MIN_VALUE)
        {
            return Integer.MIN_VALUE;
        }
        else if(val1>Integer.MAX_VALUE-1)
        {
            return Integer.MAX_VALUE-1;
        }
        else if((isDividendNeg==true) && (isDivisorNeg==true))
        {
            System.out.println("Both have same negative symbols...");
            return val1;
        }
        else if((isDividendNeg==false) && (isDivisorNeg==false))
        {
            System.out.println("Both have same positive symbols..."+ isDividendNeg + isDivisorNeg);
            
            return val1;
        }
        else if(isDividendNeg)
        {
            System.out.println("Dividend negative...");
            return -val1;
        }
        else{
            System.out.println(" Divisor Negative... ");
            return -val1;
        }
        //return val;
        
    }
	public static void main(String[] args) {
		System.out.println("Hello World");
		System.out.println(divide(10,3));
	}
}
