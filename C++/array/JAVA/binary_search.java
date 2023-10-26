package functions;

import java.util.Scanner;

public class binary_search {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int no= sc.nextInt();
		int[] a= new int[no];
		for(int i=0;i<a.length;i++) {
			a[i]=sc.nextInt();
		}
		int data= sc.nextInt();
		int l=0;
		int h=a.length-1;
		while(l<=h) {
			int m=(l+h)/2;
			if(data>a[m]) {
				l=m+1;
			}
			else if(data<a[m]) {
				h=m-1;
			}
			else {
				System.out.println(m);
				return;
			}
		}
			
		System.out.println("-1");

	}

}
