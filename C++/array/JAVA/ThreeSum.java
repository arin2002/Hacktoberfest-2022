

import java.util.*;

public class ThreeSum{
	static List<List<Integer>> threeSum(int[] a) {
        List<List<Integer>> result= new LinkedList<>();
        Arrays.sort(a);
        int n=a.length;
        for(int i=0;i<n-2;i++){
            if(i==0||(i>0&&a[i]!=a[i-1])){
                int low=i+1;
                int high=n-1;
                int sum=0-a[i];
                while(low<high){
                    if(a[low]+a[high]==sum){
                        result.add(Arrays.asList(a[i],a[low],a[high]));
                        while(low<high&&a[low]==a[low+1])
                            low++;
                        while(low<high&&a[high]==a[high-1])
                            high--;
                        low++;
                        high--;
                    }
                    else if(a[low]+a[high]>sum){
                        high--;
                    }
                    else{
                        low++;
                    }
                }
            }
        }
        return result;
    }
	public static void main(String[] args) {
		int[] a={-1,0,1,2,-1,-4};
		System.out.println(threeSum(a));
	}
}

//problem link: https://leetcode.com/problems/3sum/