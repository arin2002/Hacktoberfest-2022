import java.util.*;

class Main {
  public static Scanner scn = new Scanner(System.in);

  public static class Node {
    int val = 0;
    Node left = null;
    Node right = null;

    Node(int val) {
      this.val = val;
    }
  }

  // left : prev, right : next
  public static Node SortedDLLToBST(Node head) {
      
    if(head == null || head.right == null) return head;
      
    Node mid = findmid(head);
    
    Node prev = mid.left;
    Node newhead = mid.right;
    
    mid.left = mid.right = newhead.left = null;
    
    if(prev != null) prev.right = null;
    
    mid.left = SortedDLLToBST(prev != null ? head : null);
    mid.right = SortedDLLToBST(newhead);
      
    return mid;
  }
  
  static Node findmid(Node head) {
      
      if (head == null || head.right == null)
      return head;
      
      Node slow = head, fast = head;
      
      while(fast.right != null && fast.right.right != null) {
          slow = slow.right;
          fast = fast.right.right;
      }
      
      return slow;
  }

  // Input_code===================================================

  public static void display(Node node) {
    if (node == null)
      return;

    StringBuilder sb = new StringBuilder();
    sb.append((node.left != null ? node.left.val : "."));
    sb.append(" -> " + node.val + " <- ");
    sb.append((node.right != null ? node.right.val : "."));

    System.out.println(sb.toString());

    display(node.left);
    display(node.right);

  }

  public static Node makeList(int n) {
    Node dummy = new Node(-1);
    Node prev = dummy;
    while (n-- > 0) {
      Node node = new Node(scn.nextInt());
      prev.right = node;
      node.left = prev;
      prev = prev.right;
    }

    Node head = dummy.right;
    head.left = dummy.right = null;

    return head;
  }

  public static void main(String[] args) {
    Node head = makeList(scn.nextInt());

    head = SortedDLLToBST(head);
    display(head);
  }

}
