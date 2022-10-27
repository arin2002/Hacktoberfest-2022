package functions;

import java.util.Scanner;

public class span_array {

	public static void main(String[] args) {

		
		Scanner sc= new Scanner(System.in);
		int no=sc.nextInt();
		
		int[] arr= new int[no];
		
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=sc.nextInt();
		}
		
		int comp=0;
		int less=arr[0];
		
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]>comp)
			{
				comp=arr[i];
			}
			if(arr[i]<less)
			{
				less=arr[i];
			}
		}
		
		int span= comp-less;
		System.out.println(span);
	}

}
