package recursion;

import java.util.Scanner;

public class MainClass {
	
	static int stepCount;

	public static void main(String[] args) {
		
//		System.out.println(pow(3 ,10000));
//		System.out.println("steps " + stepCount);
//		
//		stepCount = 0 ;
//		System.out.println(fastpow(3 ,10000));
//		System.out.println("steps " + stepCount);
		Scanner sc = new Scanner (System.in) ;
		int a = sc.nextInt(); 
	    

		System.out.println(a);
		String s = sc.nextLine();
		System.out.println(s);
	}
	
	static int sum (int n) {
		if(n == 1) {
			return 1 ;
		} 
		
		return n + sum(n-1) ;
	}
	
	static int pow(int a , int b) {
		stepCount++;
		if(b == 0) {
			return 1 ;
		}
		
		return pow( a , b-1) * a ;
	}
	
	static int fastpow(int a , int b) {
		stepCount++;
		if(b == 0 ) {
			return 1 ;
		}
		if (b % 2 == 0){
			return fastpow(a*a , b/2);
		} 
		
		return a * fastpow(a , b-1 ) ;
	}
	
	static int path (int m , int n ) {
		if(m==1 || n==1) {
			return 1 ;
		}
		
		return path(m-1 , n) + path (m , n-1);
	}
	
}
