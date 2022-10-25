static Node prev;
  
public static void bToDll1(Node root) {
    if(root == null) return;

    bToDll1(root.left);

    prev.right = root;
    root.left = prev;

    prev = root;

    bToDll1(root.right);
}

public static Node bToDLL(Node root) {
  Node dummy =  new Node(-1);
  prev = dummy;

  bToDll1(root);

  Node head = dummy.right;
  head.left = dummy.right = null;

  return head;
}
