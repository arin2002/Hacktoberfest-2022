class Solution
{
	boolean isHeap(Node node){
	    return valueCheck(node, Integer.MAX_VALUE) && levelCheck(node);
	}
	
	boolean valueCheck(Node node, int value) {
	    
	    if(node==null) return true;
	    
	    boolean ans = false;
	    if(node.data < value) ans = true;

        return ans && valueCheck(node.left, node.data) && valueCheck(node.right, node.data);
	}
	
	boolean levelCheck(Node node) {
	    Queue<Node> q = new LinkedList<>();
	    
	    q.add(node);
	    int level=0;
	    boolean check = false;
	    
	    while(!q.isEmpty()) {
	        int size = q.size();
	        
	        if(size != Math.pow(2, level++)) check = true;
	        
	        for(int i=1; i<=size; i++) {
	            Node temp = q.remove();
	            
	            if(temp.left != null) q.add(temp.left);
	            if(temp.right != null) q.add(temp.right);
	        }
	        
	        if(check && !q.isEmpty()) {
	            return false;
	        }
	    }
	    
	    return true;
	}
}
