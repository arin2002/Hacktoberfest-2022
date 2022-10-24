//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/#:~:text=Given%20an%20integer%20num%20%2C%20return,by%202%20and%20obtain%207.

// Number of steps to reduce a number to 0

public class StepsToReturn0 {
    public static void main(String[] args) {
        System.out.println(numberOfSteps(10));
    }

    static int numberOfSteps(int num) {
        return helper( num, 0);
    }

    static int helper(int num, int c ){

        if (num==0){
            return c;
        }

        if (num%2==0){
            return helper(num/2 , c+1);
        }
        else {
            return helper(num-1,c+1);
        }
    }
}