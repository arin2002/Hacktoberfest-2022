package functions;

import java.util.Scanner;

public class find_element_array {

	public static void main(String[] args) {
     Scanner sc= new Scanner(System.in);
     int no= sc.nextInt();
    
     
     int[] arr= new int[no];
     
     for(int i=0;i<arr.length;i++)
     {
    	 arr[i]=sc.nextInt();
     }
     
     int find=sc.nextInt();
     int ind=-1;
     
     for(int i=0;i<arr.length;i++)
     {
    	 if(find==arr[i])
    	 {
    		 ind=i;
    		 break;
    	 }
     }
     System.out.println(ind);
	}

}
