/* 
* PROBLEM STATEMENT: (taken from Leetcode)
This is a program to find out the NUMBER OF STEPS it takes to reduce a number to zero. 
If the number is odd, SUBTRACT 1. If the number is even, DIVIDE BY 2 

* About the SOLUTION:
The problem is solved using Recursion. Thus, the space complexity is high comparatively.
Same is the case with time complexity. */

public class NumberOfSteps {
    public static void main(String[] args) {
        System.out.println(steps (241));
    }

    /* 
    * Reason behind using the Helper function:
    Because we do not take steps as a parameter in the main function and we need to update the number of steps everytime an operation is performed.  
     */

    public static int helper(int n, int s){
        if (n==0){
            return s;
        }
        /* dividing the number by 2 if it is even and updating the steps to steps+1 */
        if (n%2==0){
            return helper(n/2, s+1);
        }

        /* subtracting 1 of the number is odd and updating the steps to steps+1 */
        if (n%2==1){
            return helper(n-1, s+1);
        }

        return s;
    }

    /* Main function that is called in psvm */
    public static int steps (int n){
        return helper(n, 0);
    }
}
