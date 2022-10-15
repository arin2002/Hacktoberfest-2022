/*
Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5

Platform: Leetcode: 69
*/
class findSquareRoot{
    public static int mySqrt(int num)
    {
        return (int)Math.sqrt(num);
    }
    public static void main(String args[])
    {
        int num = 25;
        System.out.println("The square root of "+ num + " is: "+ mySqrt(num));
    }
}