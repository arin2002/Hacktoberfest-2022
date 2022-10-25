class Solution{
    
    ArrayList<Integer> rotation(int n) {
        Deque<Integer> dq = new LinkedList<>();
        ArrayList<Integer> list = new ArrayList<>();
        
        dq.addFirst(n);
        
        for(int i = 1; i < n; i++) {
            dq.addFirst(n-i);
            for(int j = 0; j < n-i; j++) {
                int back = dq.removeLast();
                dq.addFirst(back);
            }
        }
        
        while(!dq.isEmpty()) {
            list.add(dq.removeFirst());
        }
        return list;
    }
}
