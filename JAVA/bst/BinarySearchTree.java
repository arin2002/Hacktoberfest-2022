package bst;

import java.util.Scanner;

public class BinarySearchTree {
	
	Node root ;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		
		BinarySearchTree tree = new BinarySearchTree();
		
		System.out.println("Enter no of elements");
		int n = sc.nextInt();
		System.out.println("Enter all elements");
		
		Node root = new Node(15);
		for(int i=0 ; i<n ; i++) {
			int a = sc.nextInt();
			tree.insert(root,a);
		}
		
		tree.display(root);
//		tree.inorder(root);
//		System.out.println();
//		tree.preorder(root);
//		tree.delete(root, 20);
//		tree.inorder(root);
//		System.out.println();
//		tree.delete(root, 40);
//		tree.inorder(root);
//
//		System.out.println(tree.search(root, 20));
		sc.close();
	}
	
	static Node insert(Node root, int item) {
        if(root == null) {
            root = new Node (item);
            return root;
        }
        if(root.data > item) {
            root.left = insert(root.left, item);
        } else if(root.data < item) {
            root.right = insert(root.right, item);
        }
        return root;
    }
	
	void inorder(Node root) {
		if(root != null) {
			inorder(root.left);
			System.out.print(root.data+" ");
			inorder(root.right);
		}
	}
	
	void preorder(Node root) {
		if(root != null) {
			System.out.print(root.data+" ");
			preorder(root.left);
			preorder(root.right);
		}
	}
	
	void postorder(Node root) {
		if(root != null) {
			postorder(root.left);
			postorder(root.right);
			System.out.println(root.data+" ");
		}
	}
	
	boolean search(Node root, int x) {
	    if(root == null) return false;
	    
	    if(root.data == x) return true;
	    
	    if(root.data > x) return search(root.left, x);
	    
	    return search(root.right, x);
    }
	
	
	Node delete(Node root, int data) { 
        
        if(root == null) return null;
        
        if(root.data > data) {
        	root.left = delete(root.left, data);
        } else if(root.data < data) {
        	root.right = delete(root.right, data);
        } else {
        	if(root.left != null && root.right != null) {
        		
        		Node minNodeForRight = minimumElement(root.right);
        		
        		root.data = minNodeForRight.data;
        		
        		root.right = delete(root.right, minNodeForRight.data);
        	} else if(root.left != null) {
        		root = root.left;
        	} else if(root.right != null) {
        		root = root.right;
        	} else {
        		root = null;
        	}
        }
        return root;
    } 
	
	static Node minimumElement(Node root) {
		if(root.left == null) return root;
		
		else {
			return minimumElement(root.left);
		}
	}
	
	static void display(Node node) {
        if(node == null) return;
        String str = "";

        if(node.left == null) str += ".";
        else str += node.left.data;

        str += " => " + node.data + " <= ";

        if(node.right == null) str += ".";
        else str += node.right.data;

        System.out.println(str);
        display(node.left);
        display(node.right);
    }
	
}

class Node {
	int data;
	Node right,left;
	
	public Node(int data) {
		this.data = data ;
		left = right = null ;
	}
}

class Index {
	int index;
}

