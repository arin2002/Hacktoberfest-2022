package functions;

import java.util.*;
public class subarrays_of_array {

	public static void main(String[] args) {
		 Scanner sc= new Scanner(System.in);
		    int no=sc.nextInt();
		    int[] a= new int[no];
		    for(int i=0;i<a.length;i++){
		        a[i]=sc.nextInt();
		    }
		    for(int k=0;k<a.length;k++){
		       for(int i=k;i<a.length;i++){
		        for(int j=k;j<=i;j++){
		            System.out.print(a[j]+"\t");
		        }
		        System.out.println();
		    }
		    } 

	}

}
