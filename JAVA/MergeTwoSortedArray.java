import java.util.Scanner;

public class MergeTwoSortedArray {
    public static int[] mergeTwoSortedArrays(int[] a, int[] b){
        int m = a.length;
        int n = b.length;
        int[] res = new int[m + n];
        int c =0;
        int i=0;
        int j=0;

        while(i < m && j < n)
        {
            if(a[i] < b[j])
            {
                res[c] = a[i];
                i++;
            }
            else
            {
                res[c] = b[j];
                j++;
            }
            c++;
        }

        while(i<m)
        {
            res[c] = a[i];
            i++;
            c++;
        }

        while(j<n)
        {
            res[c] = b[j];
            j++;
            c++;
        }

        return res;
    }

    public static void print(int[] arr){
        for(int i = 0 ; i < arr.length; i++){
            System.out.println(arr[i]);
        }
    }
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] a = new int[n];
        for(int i = 0 ; i < n; i++){
            a[i] = scn.nextInt();
        }
        int m = scn.nextInt();
        int[] b = new int[m];
        for(int i = 0 ; i < m; i++){
            b[i] = scn.nextInt();
        }
        int[] mergedArray = mergeTwoSortedArrays(a,b);
        print(mergedArray);
    }

}
