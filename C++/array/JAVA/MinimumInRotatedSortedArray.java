import java.util.*;

public class MinimumInRotatedSortedArray{
	static int findMin(int[] nums) {
        int i=0,j=nums.length-1;
        while(i<j){
            int mid=i+(j-i)/2;
            if(nums[mid]>nums[j]){
                i=mid+1;
            }
            else if(nums[mid]<nums[j]){
                j=mid;
            }
            else{
                j--;
            }
        }
        return nums[j];
    }
	public static void main(String[] args) {
		int[] a={2,2,2,0,1};
		System.out.println(findMin(a));
	}
}

//problem link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/