/*Given a string s, return the longest palindromic substring in s.

A string is called a palindrome string if the reverse of that string is the same as the original string.*/

import java.util.Arrays;
class Solution {

    /**
     * Time Complexity: O(n^2)
     * Space Complexity: O(n^2) (In addition there is recursion complexity) 
     */
    public int longestCommonSubsequence(String text1, String text2) {
        int len1 = text1.length();
        int len2 = text2.length();
        int[][] dp = new int[len1][len2];
        for (int i = 0; i < len1; i++) {
            Arrays.fill(dp[i], -1);
        }
        return lcs(text1, text2, 0, 0, dp);
    }

    int lcs(String a, String b, int p1, int p2, int[][] dp) {

        if (p1 >= a.length() || p2 >= b.length())
            return 0;

        if (dp[p1][p2] != -1)
            return dp[p1][p2];

        int result;
        if (a.charAt(p1) == b.charAt(p2))
            result = 1 + lcs(a, b, p1 + 1, p2 + 1, dp);
        else
            result = Math.max(lcs(a, b, p1 + 1, p2, dp), lcs(a, b, p1, p2 + 1, dp));

        return dp[p1][p2] = result;
    }
}
