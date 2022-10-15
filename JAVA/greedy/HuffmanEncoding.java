class Solution {
    
    class Node implements Comparable<Node>{
        int freq;
        char ch;
        
        Node left=null,right=null;
        
        public Node(){}
        
        public Node(int freq, char ch) {
            this.freq = freq;
            this.ch = ch;
        }
        
        public int compareTo(Node p) {
            return this.freq - p.freq;
        }
    }
    
    public void print(Node root, String asf, ArrayList<String> ans) {
        if(root.left == null && root.right == null) {
            // Leaf Node
            ans.add(asf);
            return;
        }
        
        print(root.left, asf + "0", ans);
        print(root.right, asf + "1", ans);
    }
    
    public ArrayList<String> huffmanCodes(String s, int f[], int N) {
        PriorityQueue<Node> pq = new PriorityQueue<>();
        
        for(int i=0; i<N; i++) {
            Node toAdd = new Node(f[i], s.charAt(i));
            pq.add(toAdd);
        }
        
        Node root = null;
        
        while(pq.size() > 1) {
            
            Node fmin = pq.remove(); // First Node
            Node smin = pq.remove(); // Second Node
            
            Node temp = new Node();
            temp.freq = fmin.freq + smin.freq;
            temp.ch = '-';
            
            if(fmin.freq == smin.freq) {
                temp.left = smin;
                temp.right = fmin;
            } else {
                temp.left = fmin;
                temp.right = smin;
            }
            
            root = temp;
            
            pq.add(temp);
        }
        
        // Print Codes
        ArrayList<String> ans = new ArrayList<>();
        print(root, "", ans);
        
        return ans;
    }
}
