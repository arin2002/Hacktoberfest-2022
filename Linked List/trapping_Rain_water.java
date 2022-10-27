package DSA.Array;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class trapping_Rain_water {
    public static void main (String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim()); //Inputting the testcases
        while(t-->0){

            //size of array
            int n = Integer.parseInt(br.readLine().trim());
            int arr[] = new int[n];
            String inputLine[] = br.readLine().trim().split(" ");

            //adding elements to the array
            for(int i=0; i<n; i++){
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            rain obj = new rain();

            //calling trappingWater() function
            System.out.println(obj.trappingWater(arr, n));
        }
    }
}

// } Driver Code Ends



class rain{

    // arr: input array
    // n: size of array
    // Function to find the trapped water between the blocks.
    static int trappingWater(int arr[], int n) {

        // Your code here
       /**   *** tle
        for(int i=1;i<n-1;i++){
            int l=arr[i];
            for (int j = 0; j < i; j++) {
                l=l < arr[j] ? arr[j] : l;
            }
            int r=arr[i];
            for (int j = i+1; j <n ; j++) {
                r=r < arr[j] ? arr[j] : r;
            }

            s=s+(l>r? r:l) -arr[i];
        }
        return s;

        //////////////////////////////////////////////
        SC=O(N)
        if(n<=2)
        return 0;
        int[] left=new int[n];
        int[] right=new int[n];
        left[0]=0;
        int leftmax=arr[0];
        for (int i = 1; i <n ; ++i) {
        left[i]=leftmax;
        leftmax=Math.max(leftmax,arr[i]);
        }
        right[n-1]=0;
        int mxright=arr[n-1];
        for (int i = n-2; i >=0 ; --i) {
        right[i]=mxright;
        mxright=Math.max(mxright,arr[i]);
        }
        int s=0;
        for (int i = 1; i < n-1; ++i) {
        if(arr[i]<left[i] && arr[i]<right[i]){
        s+=Math.min(left[i],right[i])-arr[i];
        }
        }
        return s;
        /////////////////////////////////////////////////////
        **/

       if(n<=2)
           return 0;

        int leftMax = arr[0];
        int rightMax = arr[n-1];

        int left = 1;
        int right = n-2;
        int water = 0;

        while(left <= right) {
            if (leftMax < rightMax) {
                if (arr[left] >= leftMax) {
                    leftMax = arr[left];
                } else
                    water = water + (leftMax - arr[left]);

                //leftMax = Math.max(leftMax, arr[left]);
                left++;
            } else {
                if (arr[right] > rightMax) {
                    rightMax = arr[right];
                }

                water = water + (rightMax - arr[right]);
                right--;
            }
        }
        return water;

    }

}


