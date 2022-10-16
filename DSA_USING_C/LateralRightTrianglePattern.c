import java.util.*;

public class LateralRightTriangle {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter m and n");
        int m = sc.nextInt();
        // int n = sc.nextInt(); // no need

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m - i; j++) {
                System.out.print(" ");
            }

            for (int k = 0; k <= i; k++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
