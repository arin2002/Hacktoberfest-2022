import java.util.*;

//https://leetcode.com/problems/4sum/
//Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:
//0 <= a, b, c, d < n
//a, b, c, and d are distinct.
//nums[a] + nums[b] + nums[c] + nums[d] == target
//You may return the answer in any order.

public class FourSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Size of Array");
        int size = sc.nextInt();
        int[] arr = new int[size];
        for(int i=0; i<size; i++){
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter Target Value");
        int target = sc.nextInt();
        List<List<Integer>> result = findQuadruplets(arr, target);
    }

    private static List<List<Integer>> findQuadruplets(int[] arr, int target) {

        Arrays.sort(arr);
        Set<List<Integer>> lists = new HashSet<>();

        for(int i=0; i<arr.length; i++){
            for(int j=i+1; j<arr.length; j++){
                for(int k=j+1; k<arr.length; k++){
                    long requiredNum = (long)target - ((long)arr[i] + (long)arr[j] + (long)arr[k]);
                    System.out.println(requiredNum);
                    int search = binarySearch(arr, requiredNum, k + 1, arr.length - 1);
                    if(search != -1)
                        lists.add(Arrays.asList(arr[i], arr[j], arr[k], (int)requiredNum));
                }
            }
        }

        return new ArrayList<>(lists);
    }

    private static int binarySearch(int[] arr, long target, int start, int end) {
        if(start > end)
            return -1;
        else {
            int mid = (start + end)/2;

            if(arr[mid] == target)
                return mid;

            else if(target > arr[mid])
                return binarySearch(arr, target, mid+1, end);

            else
                return binarySearch(arr, target, start, mid-1);
        }
    }
}
