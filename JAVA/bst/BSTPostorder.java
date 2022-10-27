class GFG
{
    public static Node constructTree(int post[],int n) {
        idx = n-1;
        return bst(post, Integer.MIN_VALUE, Integer.MAX_VALUE);
    }
    
    static int idx;
    
    public static Node bst(int post[], int start, int end) {
        if(idx < 0 || post[idx] < start || post[idx] > end) return null;
        
        Node node = new Node(post[idx--]);
        
        node.right = bst(post, node.data, end);
        node.left = bst(post, start, node.data);
        
        return node;
    } 
}
