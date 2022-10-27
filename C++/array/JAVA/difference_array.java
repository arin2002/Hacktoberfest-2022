package functions;

import java.util.Scanner;

public class difference_array {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter size of array 1 :");
		int n1 = sc.nextInt();
		int[] arr1 = new int[n1];
		System.out.println("Enter elements of array 1 :");
		for(int i=0;i<arr1.length;i++) {
			arr1[i]=sc.nextInt();
		}
		System.out.println("Enter size of array 2 :");
		int n2 = sc.nextInt();
		int[] arr2 = new int[n2];
		System.out.println("Enter elements of array 2 :");
		for(int i=0;i<arr2.length;i++) {
			arr2[i]=sc.nextInt();
		}	
			
		int[] diff = new int[n2];
		int i=arr1.length-1;
		int j=arr2.length-1;
		int k=diff.length-1;
		int c=0;
		while(k>=0) {
			int digit = 0;
			int arr1val = i>=0? arr1[i] : 0;
			if(arr2[j] + c >= arr1val) {
				digit = arr2[j] + c - arr1val;
				c=0;
			}
			else {
				digit = arr2[j] +  c + 10 - arr1val;
				c=-1;
			}		
			diff[k] = digit;
			i--;
			j--;
			k--;
		}
		int idx = 0;
		while(idx<diff.length) {
			if(diff[idx]==0) {
				idx++;
			}
			else {
				break;
			}
		}
	//Handling Test Case Here
		if(idx == diff.length) {
			System.out.println("Diff array is :");
			System.out.println(diff[idx-1]);
		}
		else {
			System.out.println("Diff array is :");
			while(idx<diff.length) {
				System.out.print(diff[idx]+"\t");
				idx++;
			}
		}
	}

	}


