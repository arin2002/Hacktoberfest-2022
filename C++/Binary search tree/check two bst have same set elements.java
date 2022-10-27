import java.util.*;
 
class GFG
{
 
// BST Node
static class Node
{
    int data;
    Node left;
    Node right;
};
 
// Utility function to create new Node
static Node newNode(int val)
{
    Node temp = new Node();
    temp.data = val;
    temp.left = temp.right = null;
    return temp;
}
 
// function to insert elements of the
// tree to map m
static void insertToHash(Node root, HashSet<Integer> s)
{
    if (root == null)
        return;
    insertToHash(root.left, s);
    s.add(root.data);
    insertToHash(root.right, s);
}
 
// function to check if the two BSTs contain
// same set of elements
static boolean checkBSTs(Node root1, Node root2)
{
    // Base cases
    if (root1 != null && root2 != null)
        return true;
    if ((root1 == null && root2 != null) || (root1 != null && root2 == null))
        return false;
         
    // Create two hash sets and store
    // elements both BSTs in them.
    HashSet<Integer> s1 = new HashSet<Integer>();
    HashSet<Integer> s2 = new HashSet<Integer>();
    insertToHash(root1, s1);
    insertToHash(root2, s2);
     
    // Return true if both hash sets
    // contain same elements.
    return (s1.equals(s2));
}
 
// Driver program to check above functions
public static void main(String[] args)
{
    // First BST
    Node root1 = newNode(15);
    root1.left = newNode(10);
    root1.right = newNode(20);
    root1.left.left = newNode(5);
    root1.left.right = newNode(12);
    root1.right.right = newNode(25);
     
    // Second BST
    Node root2 = newNode(15);
    root2.left = newNode(12);
    root2.right = newNode(20);
    root2.left.left = newNode(5);
    root2.left.left.right = newNode(10);
    root2.right.right = newNode(25);
     
    // check if two BSTs have same set of elements
    if (checkBSTs(root1, root2))
        System.out.print("YES");
    else
        System.out.print("NO");
}    
}