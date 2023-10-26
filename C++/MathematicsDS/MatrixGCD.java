/*Replace every matrix element with maximum of GCD of row or column*/


import java.util.*;
class MatrixGCD{               // TIME COMPLEXITY - O(mn)
                                // SPACE COMPLEXITY - O(m+n)
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("enter row: ");
        int n= sc.nextInt();
        System.out.println("enter col: ");
        int m= sc.nextInt();
        int arr[][] = new int[n][m];
        System.out.println("enter array elements: ");
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j] = sc.nextInt();
            }
            System.out.println();
        }
        replaceMatrix(arr, n ,m);
        
    }
    static void replaceMatrix( int arr[][], int n, int m){
        int row[] = new int[n];
        int col[] = new int[m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                row[i] = gcd(row[i],arr[i][j]);
                col[j] = gcd(col[j],arr[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j]= Math.max(row[i], col[j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    }
    static int gcd(int a ,int b){
        if(a==0){
            return b;
        }
        return gcd(b%a,a);
        
    }
    
}
