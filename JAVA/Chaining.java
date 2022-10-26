package hashing;
import java.util.*;

public class Chaining {
	
	static class Node {
		int data;
		Node next;
		
		public Node(int data) {
			this.data = data;
		}
	}
	
	static int hash(int key) {
		return key%10;
	}
	
	static void insert(Node hash[], int key) {
		int index = hash(key);
		hash[index] = SortedInsert(hash[index], key);
//		System.out.println(hash[index].data);
	}
	
	private static Node SortedInsert(Node node, int key) {
		
		Node toAdd, prev=null, temp = node;
		
		toAdd = new Node(key);
//		toAdd.next = null;
		
		if(node == null) {
			node = toAdd;
		} 
		else {
			while(temp != null && temp.data < key) {
				prev = temp;
				temp = temp.next;
			}
			
		    if(temp == node) {
		 	    toAdd.next = node;
		 	    node = toAdd;
		    } else {
	    		toAdd.next = prev.next;
	    		prev.next = toAdd;
		    }
		}
		
		return node;
	}
	
	static void search(Node hash[], int key) {
		int index = hash(key);
		Node search = searchHelper(hash[index], key);
		if(search == null) {
			System.out.println("Element Not present");
		} else {
			System.out.println("Element found " + search.data);
		}
	}

	private static Node searchHelper(Node node, int key) {
		
		while(node != null) {
			if(key == node.data) {
				return node;
			}
			node = node.next;
		}
		
		return null;
	}
	
	public static void display(Node hash[]) {
		for(int i=0; i<hash.length; i++) {
			System.out.print(i + " => ");
			Node temp = hash[i];
			if(temp == null) System.out.print("Empty");
			while(temp != null) {
				System.out.print(temp.data + " ");
				temp = temp.next;
			}
			System.out.println();
		}
	}
	
	public static void delete(Node hash[], int x) {
		int index = hash(x);
		hash[index] = deleteHelper(hash[index], x);
		System.out.println("Deleted");
	}
	
	
	private static Node deleteHelper(Node node, int x) {
		Node temp = node, prev = null;
		while(temp != null && temp.data != x) {
			prev = temp;
			temp = temp.next;
		}
		
		if(temp == node) {
			node = node.next;
		} else if(temp.data == x) {
//			System.out.println(prev.data + " " + temp.data);
			prev.next = temp.next;
		}
		
		return node;
	}

	public static void main(String[] args) {
		
		Node hash[] = new Node[10];
		Arrays.fill(hash,  null);
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no of elements to insert");
		int n = sc.nextInt();
		System.out.println("Enter Elements");
	
		for(int i=0; i<n; i++) {
			int a = sc.nextInt();
			insert(hash, a);
		}
		display(hash);
//		search(hash, 74);
		delete(hash, 12);
//		delete(hash, 122);
		display(hash);
		search(hash, 122);
		sc.close();
	}

}
