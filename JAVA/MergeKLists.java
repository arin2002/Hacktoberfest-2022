class The_Comparator implements Comparator<Node> {
    public int compare(Node node1, Node node2)
    {
        return node1.data - node2.data;
    }
}

class Solution
{
    //Function to merge K sorted linked list.
    Node mergeKList(Node[]arr,int K) {
        
        Node ans = new Node(1);
        Node head = ans;
        
        PriorityQueue<Node> pq = new PriorityQueue<>(new The_Comparator());
        
        for(int i=0; i<arr.length; i++) {
            pq.add(arr[i]);
        }
        
        while(!pq.isEmpty()) {
            Node toAdd = pq.remove();
            
            if(toAdd.next != null) pq.add(toAdd.next);
            
            ans.next = toAdd;
            ans = toAdd;
        }
        
        return head.next;
    }
}
