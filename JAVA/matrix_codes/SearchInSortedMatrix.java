import java.util.Scanner;

public class SearchInSortedMatrix {
    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[][] mat = new int[n][n];

        for (int i = 0; i < mat.length; i++) {
            for (int j = 0; j < mat[0].length; j++) {
                mat[i][j] = scn.nextInt();
            }
        }

        //val to search
        int target =  scn.nextInt();

        int r = 0;
        int c = mat.length - 1;

        while(r <= mat.length - 1  && c >= 0)
        {
            if(mat[r][c] == target)
            {
                System.out.println(r);
                System.out.println(c);
                return;
            }
            else if ( mat[r][c] < target)
            {
                r++;
            }
            else
            {
                c--;
            }
        }

        System.out.println("Not Found");
    }
}
