package hashing;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class LinearProbing {
	
	static int hash(int key) {
		return key%10;
	}
	
	static int probe(int hash[], int key) {
		int index = hash(key);
		int i=0;
		while(hash[(index+i) % 10] != 0) i++;
		
		return (index+i) % 10;
	}
	
	public static void Insert(int hash[], int key) { 
		int index = hash(key);
		
		if(hash[index] != 0) {
			index = probe(hash, key);
		}
		hash[index] = key;
	}
	
	public static void delete(int hash[], int key) {
		int index = hash(key);
		int i = 0;
		while(hash[(index+i) % 10] != key) {
			i++;
		}
		
		hash[index + i] = -1; //Dummy Value
		System.out.println("Key is Deleted");
	}
	
	
	public static int Search(int hash[], int key) {
		int index = hash(key);
		
		int i = 0;
		
		while(hash[(index+i) % 10] != key) { 
			if(hash[(index+i) % 10] == 0) return -1;
			i++;
		}
		
		return (index+i) % 10;
	}
	
	public static void display(int hash[]) {
		for(int i=0; i<hash.length; i++) {
			System.out.println("key => " + i + " value => " + hash[i]);
		}
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int hash[] = new int [10];
		Map<Integer, Integer> map = new HashMap<>();
		System.out.println("Enter no of elements to insert");
		int n = sc.nextInt();
		System.out.println("Enter Elements");
	
		for(int i=0; i<n; i++) {
			int a = sc.nextInt();
			Insert(hash, a);
		}
		delete(hash, 25);
		
		
		System.out.println("Element found at " + Search(hash, 74));
		System.out.println("Element found at " + Search(hash, 25));
		display(hash);
	}

}
