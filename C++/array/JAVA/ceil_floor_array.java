package functions;
import java.util.*;
public class ceil_floor_array {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
	    int n= sc.nextInt();
	    int[] a= new int[n];
	    for(int i=0;i<a.length;i++){
	        a[i]=sc.nextInt();
	    }
	    int d=sc.nextInt();
	    int l=0;
	    int h=a.length-1;
	    int c=0;
	    int f=0;
	    while(l<=h){
	        int m=(l+h)/2;
	        if(d>a[m]){
	            l=m+1;
	            f=a[m];
	        }
	        else if(d<a[m]){
	            h=m-1;
	            c=a[m];
	        }
	        else{
	            c=a[m];
	            f=a[m];
	            break;
	        }
	    }
	    System.out.println(c);
	    System.out.println(f);

	}

}
