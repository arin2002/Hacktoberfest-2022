package map;

import java.util.*;
import java.util.Map.Entry;

public class MainClass {

	public static void main(String[] args) {
		
		Map<String , Integer> number = new HashMap <>() ;
		
		number.put("one", 1) ;
		number.put("two", 2) ;
		number.put("three", 3) ;
		
		number.putIfAbsent("one" , 10) ;
		number.replace("one", 2 , 5);
	
		System.out.println(number.entrySet());
		
		
		Set<Entry <String , Integer >> entries = number.entrySet() ;
		
		for(Entry<String , Integer> entry : entries) {
			entry.setValue(entry.getValue() * 100 );
		}
		System.out.println(number);
		
		System.out.println(getHash("azmal"));
		System.out.println(getHash("#"));
		
		char c = 'a'; 
        int ascii = c; 
        System.out.println("The ASCII value of " + c + " is: " + ascii); 

		
	}
	
	public static int getHash(String s ) {
		int hash = 0;
		for(int i=0 ; i<s.length() ; i++) {
			hash += s.charAt(i);
		}
		return hash ;
	}

}
