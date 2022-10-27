import java.util.*;

public class Main {

	public static int solution(int[] arr) {
		
		int ans = 0;
		
		for(int i=0; i<arr.length-1; i++) {
    		int max = arr[i];
		    int min = arr[i];
		    HashSet<Integer> set = new HashSet<>();
		    set.add(arr[i]);
		    
		    for(int j=i+1; j<arr.length; j++) {
		        
		        if(set.contains(arr[j])) {
		            break;
		        } 
		        
		        set.add(arr[j]);
		        
		        max = Math.max(max, arr[j]);
		        min = Math.min(min, arr[j]);
		        
		        if(j-i == max-min) {
		            ans = Math.max(ans, j - i +1);
		        }
		        
		        if(max - min > arr.length) break;
		    }
		}

		return ans;
	}
	
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		int[] arr = new int[scn.nextInt()];
		for (int i = 0; i < arr.length; i++) {
			arr[i] = scn.nextInt();
		}
		System.out.println(solution(arr));
	}

}
