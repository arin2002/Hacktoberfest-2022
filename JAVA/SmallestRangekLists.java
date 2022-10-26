class Solution
{
    
    static class Pair implements Comparable<Pair>{
        int ano, i, value;
        
        Pair(int ano, int i, int value) {
            this.ano = ano;
            this.i = i;
            this.value = value;
        }
        
        public int compareTo(Pair p) {
            return this.value - p.value;
        }
    }
    
	static int[] findSmallestRange(int[][] arr,int n,int k) {
        PriorityQueue<Pair> pq = new PriorityQueue<>();
        int min=Integer.MAX_VALUE, max=Integer.MIN_VALUE;
        
        for(int i=0; i<k; i++) {
            pq.add(new Pair(i, 0, arr[i][0]));
            min = Math.min(arr[i][0], min);
            max = Math.max(arr[i][0], max);
        }
        
        int ans[] = new int[2];
        ans[0] = min;
        ans[1] = max;
        
        while(true) {
            Pair p = pq.remove();
            
            if(p.i == n-1) {
                break;
            }
            
            pq.add(new Pair(p.ano, p.i+1, arr[p.ano][p.i+1]));
            min = pq.element().value;
            max = Math.max(max, arr[p.ano][p.i+1]);
            
            if( (max - min) < (ans[1] - ans[0]) ) {
                ans[1] = max;
                ans[0] = min;
            }
        }
        return ans;
	}
}
