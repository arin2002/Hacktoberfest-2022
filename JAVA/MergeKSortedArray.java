class Solution
{
    
    static class Pair implements Comparable<Pair> {
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
    
    //Function to merge k sorted arrays.
    public static ArrayList<Integer> mergeKArrays(int[][] arr,int k) {
        PriorityQueue<Pair> pq = new PriorityQueue<>();
        
        for(int i=0; i<k; i++) pq.add(new Pair(i, 0, arr[i][0]));
        
        ArrayList<Integer> ans = new ArrayList<>();
        
        while(!pq.isEmpty()) {
            Pair p = pq.remove();
            ans.add(p.value);
            
            p.i++;
            if(p.i < k) {
                p.value = arr[p.ano][p.i];
                pq.add(p);
            }
        }
        
        return ans;
    }
}
