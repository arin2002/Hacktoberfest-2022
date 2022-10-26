class Solution { 
    
    class Pair implements Comparable <Pair>{
        int a, b;
        
        Pair(int a, int b) {
            this.a = a;
            this.b = b;
        }
        
        public int compareTo(Pair p) {
            
            if(this.b > p.b) return 1;
            else if(this.b < p.b) return -1;
            
            return this.a - p.a;
        }
    }
      
	public ArrayList<Integer> Kclosest(int arr[], int n, int x, int k) { 
	    PriorityQueue<Pair> pq = new PriorityQueue<>();
	    for(int i=0; i<n; i++) {
	        Pair toAdd = new Pair(arr[i], Math.abs(x - arr[i]));
	        pq.add(toAdd);
	    }
	    
	    ArrayList<Integer> list = new ArrayList<>();
	    for(int i=0; i<k; i++) {
	        Pair toAdd = pq.remove();
	        list.add(toAdd.a);
	    }
	    
	    Collections.sort(list);
	    
	    return list;
	}
}
