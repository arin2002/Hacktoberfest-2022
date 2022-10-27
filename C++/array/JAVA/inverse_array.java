package functions;
import java.io.*;

public class inverse_array {
	public static void display(int[] a){
	    StringBuilder sb = new StringBuilder();

	    for(int val: a){
	      sb.append(val + "\n");
	    }
	    System.out.println(sb);
	  }

	  public static int[] inverse(int[] a){
	      int[] next= new int[a.length];
	    for(int i=0;i<a.length;i++){
	        int v= a[i];
	        next[v]=i;
	    }
	    return next;
	  }

	public static void main(String[] args) throws Exception  {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

	    int n = Integer.parseInt(br.readLine());
	    int[] a = new int[n];
	    for(int i = 0; i < n; i++){
	       a[i] = Integer.parseInt(br.readLine());
	    }

	    int[] inv = inverse(a);
	    display(inv);

	}

}
