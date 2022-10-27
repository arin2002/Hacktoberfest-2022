public static int kthSmallest(int[] arr, int l, int r, int k)  { 
    PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
    
    for(int i=0; i<=r; i++) {
        if(i<k) pq.add(arr[i]);
        
        else {
            if(pq.peek()>arr[i]) {
                pq.poll();
                pq.add(arr[i]);
            }
        }
    }
    return pq.peek();
}
