package recursion;

import java.util.*;

public class AdvancedRecursion {
	
	static Set<String> set = new HashSet <>();

	public static void main(String[] args) {
		
		int a[][] = { 
			{1 , 1 , 1 , 2 , 1 , 1 , 1} ,
			{2 , 2 , 1 , 2 , 2 , 1 , 1} ,
			{0 , 2 , 2 , 2 , 1 , 1 , 1} ,
			{1 , 1 , 0 , 2 , 1 , 2 , 2} ,
			{1 , 1 , 2 , 2 , 1 , 0 , 0}
		};
		
		floodFill(a , 2 , 3 , 3 , 2);
		printMatrix(a);
		
		String s = "abc" ;
		char array[] = s.toCharArray() ;
		char temp = array[0] ;
		array[0] = array [1] ;
		array[1] = temp ;
		System.out.println(s.valueOf(array));
		permutations("aba" , 0 , 2);
		
		int a [] = {100, 50, 7, 2};
		System.out.println(coinMax(a, 0, a.length-1));
	}
	
	static int coinMax(int a[] , int l , int r) {
		if(l+1 == r ) {
			return Math.max(a[l], a[r] );
		}
		
		return Math.max(a[l] + Math.min(coinMax(a, l+2, r), coinMax(a, l+1, r-1)),
						a[r] + Math.min(coinMax(a, l+1, r-1), coinMax(a, l, r-2)));
		
	}
	
	static void floodFill (int a[][] , int r , int c , int toFill , int prevFill) {
		int rows = a.length ;
		int cols = a[0].length ;
		
		if(c < 0 || c >= cols || r < 0 || r >= rows) {
			return ;
		}
		
		if(a [r][c] != prevFill) {
			return ;
		}
		
		a [r][c] = toFill ;
		
		floodFill(a , r-1 , c , toFill , prevFill) ;
		floodFill(a , r , c-1 , toFill , prevFill) ;
		floodFill(a , r+1 , c , toFill , prevFill) ;
		floodFill(a , r , c+1 , toFill , prevFill) ;
	}
	
   static void printMatrix(int a[][]) {
		int rows = a.length ;
		int cols = a[0].length ;
		for(int i=0 ; i<rows ; i++) {
			for(int j=0 ; j<cols ; j++) {
				System.out.print(a[i][j]+" ");
			}
			System.out.println();
		}
   }
    
    static void permutations(String s , int l , int r) {
    	if(l == r ) {
    		if(set.contains(s)) return ;
    		set.add(s);
    		System.out.println(s);
    		return ;
    	}
    	
    	for(int i=l ; i<=r ; i++) {
    		s = interchangeChar(s , l , i);
    		permutations(s , l+1 , r);
    		s = interchangeChar(s , l , i);
    	}
    }
    
    static String interchangeChar(String s , int a , int b) {
    	char arr[] = s.toCharArray();
    	char temp = arr[a];
    	arr[a] = arr[b];
    	arr[b] = temp ;
    	return String.valueOf(arr);
    }
	

}
