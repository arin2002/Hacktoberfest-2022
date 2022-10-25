class Solution
{
    //Function to return the minimum cost of connecting the ropes.
    long minCost(long arr[], int n) {
        PriorityQueue<Long> pq = new PriorityQueue<>();
        
        for(int i=0; i<n; i++) pq.add(arr[i]);
        
        long ans = 0L;
        
        while(pq.size() > 1) {
            long a = pq.remove();
            long b = pq.remove();
            
            ans += a+b;
            
            pq.add(a+b);
        }
        
        return ans ;
    }
}
