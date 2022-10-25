package bst;

import java.util.Scanner;
import java.util.concurrent.atomic.AtomicInteger;

public class ConstructBST2 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner (System.in);
		
		System.out.println("Enter no of elements in postorder :");
		int n = sc.nextInt();
		System.out.println("Enter Elements of postorder :");
		int postorder[] = new int [n];
		for(int i=0; i<n ; i++) {
			postorder[i] = sc.nextInt();
		}
//		Node root = constructTree(postorder, n-1, Integer.MIN_VALUE, Integer.MAX_VALUE);
		Node root = buildTree(postorder);
		System.out.println("Inorder traversal of BST is :");
		inorder(root);
		
		sc.close();
	}
	
	static Node constructTree(int postorder[], int start, int end) {
		if(start > end) return null;
		
		Node root = new Node(postorder[end]);
		
		int i;
		for(i=end ; i>=start; i--) {
			if(postorder[i] < root.data)
				break;
		}
		
		root.right = constructTree(postorder, i+1, end-1);
		root.left = constructTree(postorder, start, i);
		return root;
	}
	
//	static Node constructTree(int postorder[], int i, int min, int max) {
//		if(i < 0) return null;
//		
//		int cur = postorder[i];
//		if(cur < min || cur > max) {
//			return null;
//		}
//		Node root = new Node(cur);
//		i--;
//		
//		root.right = constructTree(postorder, i, cur+1, max);
//		root.left = constructTree(postorder, i, min, cur-1);
//		
//		return root;
//	}
	
	public static Node buildTree(int[] postorder, AtomicInteger pIndex,
			int min, int max) {
		
		if (pIndex.get() < 0) {
		return null;
		}
		
		int curr = postorder[pIndex.get()];
		if (curr < min || curr > max) {
		return null;
		}
		
		Node root = new Node(curr);
		pIndex.decrementAndGet();
		
		root.right = buildTree(postorder, pIndex, curr + 1, max);
		
		root.left = buildTree(postorder, pIndex, min, curr - 1);
		
		return root;
	}

	public static Node buildTree(int[] postorder) {
		
		AtomicInteger postIndex = new AtomicInteger(postorder.length - 1);
		
		return buildTree(postorder, postIndex, Integer.MIN_VALUE, Integer.MAX_VALUE);
	}
	
	
	static void inorder(Node root) {
		if(root == null) return;
		
		inorder(root.left);
		System.out.print(root.data + " ");
		inorder(root.right);
	}

}
