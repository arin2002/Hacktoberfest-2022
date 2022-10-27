static int idx;
    
public static TreeNode bstFromPreorder(int[] preorder, int start, int end) {
    if(idx >= preorder.length || preorder[idx] < start || preorder[idx] > end) return null;

    TreeNode node = new TreeNode(preorder[idx++]);
    node.left = bstFromPreorder(preorder, start, node.val);
    node.right = bstFromPreorder(preorder, node.val, end);

    return node;
}

public static TreeNode bstFromPreorder(int[] preorder) {
    return bstFromPreorder(preorder, Integer.MIN_VALUE, Integer.MAX_VALUE);
}
 
