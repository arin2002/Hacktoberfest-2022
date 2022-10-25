class Solution
{
    
    static PriorityQueue<Integer> left = new PriorityQueue<>(Collections.reverseOrder());
    static PriorityQueue<Integer> right = new PriorityQueue<>();
    
    //Function to insert heap.
    public static void insertHeap(int x) {
        if(!right.isEmpty() && right.element() < x) {
            right.add(x); 
        } else {
            left.add(x);
        }
        
        balanceHeaps();
    }
    
    //Function to balance heaps.
    public static void balanceHeaps()
    {
        if(Math.abs(left.size() - right.size()) > 1) {
            if(left.size() > right.size()) {
                right.add(left.remove());
            } else {
                left.add(right.remove());
            }
        }
    }
    
    //Function to return Median.
    public static double getMedian()
    {
        if(left.size() == right.size()) {
            int a = left.peek();
            int b = right.peek();
            return (double) ((a+b) / 2);
        } else {
            return left.size() > right.size() ? left.element() : right.element();
        }
    }
    
}
