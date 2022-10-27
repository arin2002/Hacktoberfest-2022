class Solution {
    public int divide(int dividend, int divisor) {
        long sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
        
        long n = (long)(Math.abs(dividend));
        long m = (long)(Math.abs(divisor));

        long q = 0, temp = 0;

        for (long i = 31; i >= 0; i--) {
            if (temp + (m << i) <= n) {
                temp += m << i;
                q |= 1 << i;
            }
        }

        if(sign==-1)
          q=-q;
        
        return (int)q;
    }
}
