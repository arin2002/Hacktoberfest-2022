public static void main (String[] args) {
  Scanner sc = new Scanner(System.in);
  int t = sc.nextInt();
  while(t-- > 0) {
      int n = sc.nextInt();
      int arr[] = new int [n];

      for(int i=0; i<n; i++) {
          arr[i] = sc.nextInt();
      }
      Node root = bst(arr, 0, n-1);
      preOrder(root);
  }
}

static void preOrder(Node root) {
    if(root == null) return ;

    System.out.print(root.data + " ");
    preOrder(root.left);
    preOrder(root.right);
}

static Node bst(int arr[], int start, int end) {
    if(start > end) return null;

    int mid = (start+end)/2;

    Node root = new Node(arr[mid]);
    root.left = bst(arr,start, mid-1);
    root.right = bst(arr, mid+1, end);

    return root;
}

static class Node {
    Node left, right;
    int data;
    public Node(int data) {
        this.data = data;
    }
}
