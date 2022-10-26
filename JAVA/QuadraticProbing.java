package hashing;

import java.util.Scanner;

public class QuadraticProbing {
	
	static int hash(int key) {
		return key%10;
	}
	
	static int probe(int hash[], int key) {
		int index = hash(key);
		int i=0;
		while(hash[(index+i*i) % 10] != 0) { 
			if(hash[(index+i*i) % 10] == -1) break;
			i++;
		}
		
		return (index+i*i) % 10;
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
		while(hash[(index+i*i) % 10] != key) {
			i++;
		}
		
		hash[index + i*i] = -1; //Dummy Value
		System.out.println("Key is Deleted");
	}
	
	
	public static int Search(int hash[], int key) {
		int index = hash(key);
		
		int i = 0;
		
		while(hash[(index+i*i) % 10] != key) { 
			if(hash[(index+i*i) % 10] == 0) return -1;
			i++;
		}
		
		return (index+i*i) % 10;
	}
	
	public static void display(int hash[]) {
		for(int i=0; i<hash.length; i++) {
			System.out.println("key => " + i + " value => " + hash[i]);
		}
	}

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int hash[] = new int [10];
		
		System.out.println("Enter no of elements to insert");
		int n = sc.nextInt();
		System.out.println("Enter Elements");
	
		for(int i=0; i<n; i++) {
			int a = sc.nextInt();
			Insert(hash, a);
		}
		display(hash);
		System.out.println(Search(hash, 43));
		delete(hash, 43);
//		System.out.println(Search(hash, 43));
//		System.out.println(Search(hash, 13));
		Insert(hash,53);
		display(hash);
		System.out.println(Search(hash, 53));
	}

}
