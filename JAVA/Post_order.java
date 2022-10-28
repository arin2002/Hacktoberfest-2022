class Node {
  int item;
  Node left, right;

  public Node(int key) {
  item = key;
  left = right = null;
  }
}

class Tree {
  // Root of Binary Tree
  Node root;

  Tree() {
  root = null;
  }

  void postorder(Node node) {
    if (node == null)
      return;

    // traverse the left child
    postorder(node.left);

    // traverse the right child
    postorder(node.right);

    // traverse the root node
    System.out.print(node.item + "->");
  }

  public static void main(String[] args) {

    // create an object of Tree
    Tree tree = new Tree();

    // create nodes of the tree
    tree.root = new Node(1);
    tree.root.left = new Node(12);
    tree.root.right = new Node(9);

    // child nodes of left child
    tree.root.left.left = new Node(5);
    tree.root.left.right = new Node(6);

    // postorder tree traversal
    System.out.println("Postorder traversal");
    tree.postorder(tree.root);
  }
}
