package bst;

import java.util.Scanner;

public class ConstructBST {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner (System.in);
		
		System.out.println("Enter no of elements in preorder :");
		int n = sc.nextInt();
		System.out.println("Enter Elements of Preorder :");
		int preorder[] = new int [n];
		for(int i=0; i<n ; i++) {
			preorder[i] = sc.nextInt();
		}
		Node root = constructTree(preorder, 0, n-1);
		System.out.println("Inorder traversal of BST is :");
		inorder(root);
		
		sc.close();
	}
	static Node constructTree(int preorder[], int start, int end) {
		
		if(start > end) {
			return null;
		}
		
		Node root = new Node (preorder[start]);
		
		int i;
		for(i=start; i<=end ; i++) {
			if(preorder[i] > root.data)
				break;
		}
		root.left = constructTree(preorder, start+1, i-1);
		root.right = constructTree(preorder, i, end);
		
		return root;
	}
	
	static void inorder(Node root) {
		if(root == null) return;
		
		inorder(root.left);
		System.out.print(root.data + " ");
		inorder(root.right);
	}
}
