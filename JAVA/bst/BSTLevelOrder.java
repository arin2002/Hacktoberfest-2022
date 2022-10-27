class GFG 
{
    
    static class Pair {
        Node parent=null;
        int min=Integer.MIN_VALUE, max=Integer.MAX_VALUE;
        
        public Pair(Node parent, int min, int max) {
            this.parent = parent;
            this.min = min;
            this.max = max;
        }
        
        public Pair() {
            
        }
    }
    
    //Function to construct the BST from its given level order traversal.
    public Node constructBST(int[] arr) {
        int idx = 0;
        Queue<Pair> q = new LinkedList<>();
        Node root = null;
        q.add(new Pair());
        
        while(!q.isEmpty() && idx < arr.length) {
            Pair p = q.poll();
            
            if(arr[idx] < p.min || arr[idx] > p.max) continue;
            
            Node toAdd = new Node(arr[idx++]);
            
            if(p.parent == null) {
                root = toAdd;
            } else {
                if(p.parent.data > toAdd.data) {
                    p.parent.left = toAdd;
                } else {
                    p.parent.right = toAdd;
                }
            }
            
            q.add(new Pair(toAdd, p.min, toAdd.data));
            q.add(new Pair(toAdd, toAdd.data, p.max));
            
        }
        
        return root;
    }
}
