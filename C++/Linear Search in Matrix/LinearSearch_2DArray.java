

import java.util.*;

public class LinearSearch_2DArray {
    static int [] search_2D(int [][] a, int target){
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                if (a[i][j] == target) {
                    return new int[]{i,j};
                }
            }
        }
        return new int[]{-1,-1};
    }
    public static void main(String[] args)throws Exception {
        try {
            Scanner sc = new Scanner (System.in);
        int[][] arr ={
            {1,2,3,4,5,6,},
            {7,8,9,10,11,100},
            {12,13,14,15,16},
            {18,19,20,21,22},
            {23,24,25,26,27,28},
            {29,30,31,32,33,34}
        } ;   
        System.out.println("Entr the target : ");
        int t=sc.nextInt();
        sc.close();
        int ans[]= search_2D(arr,t);
        Arrays.binarySearch(arr, t);
        System.out.println(Arrays.toString(ans));
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
