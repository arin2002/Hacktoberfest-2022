import java.util.*;

class PalindromicPattern {
    public static void main(String[] args) {
        int n = 5; // You can change this value to set the number of rows

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }
            for (int j = i; j >= 1; j--) {
                System.out.print(j);
            }
            for (int j = 2; j <= i; j++) {
                System.out.print(j);
            }
            System.out.println(); // Add this to move to the next line after each row
        }
    }
}
