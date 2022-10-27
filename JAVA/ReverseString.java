/* Given a string and reverse each word at the same position without altering sequence of words.
Examples : 
Input: - Enter the String:
       - This is a test string

Output: sihT si a tset gnirts
*/

import java.util.Scanner;
class ReverseString {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string");
        String s = sc.nextLine();
        s = s + " ";
        int p = 0, i, j, n;
        char ch, ch1;
        String rev = "";
        String rev1 = "";
        int l = s.length();
        for (i = 0; i < l; i++) {
            ch = s.charAt(i);
            if (ch == ' ') {
                rev = s.substring(p, i + 1);
                StringBuffer k = new StringBuffer(rev);
                rev1 = rev1 + k.reverse();
                p = i + 1;
            }
        }
        System.out.println("Reversed string -" + rev1);
        System.out.println("Original string - " + s);
    }
}
