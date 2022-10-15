import java.util.*;
import java.io.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

	    while(true) {
	      int n = Integer.parseInt(br.readLine());
	      if(n == 0) break;
	
	      int arr[] = new int[n];
	      String parts[] = br.readLine().split(" ");
	
	      for(int i=0; i<n; i++) {
	        arr[i] = Integer.parseInt(parts[i]);
	      }
	
	      int ans = 0;
	      int i = 0, j = 0;
	
	      while(true) {
	        while(i<n && arr[i] >= 0) i++;
	
	        while(j<n && arr[j] <= 0) j++;
	
	        if(i == n || j == n) break;
	
	        int cost = Math.min(-arr[i], arr[j]);
	        ans += Math.abs((j-i)) * cost;
	        arr[i] += cost;
	        arr[j] -= cost;
	      }
	
	      System.out.println(ans);
	    }
	}
}
