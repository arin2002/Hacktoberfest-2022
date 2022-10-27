//https://leetcode.com/problems/reverse-integer/solution/

class Solution {
public:
    int reverse(int x) {
       long long s=0;
        while(x!=0)
        {
            long long d = x%10;
            s = s*10 +d;
            x /=10;
        }
        if (s>-pow(2,31) && s<(pow(2,31)-1)) return s;
        else return 0;
        
    }
};