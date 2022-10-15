class Solution {
    
    static class Pair implements Comparable<Pair>{
        int start, end;
        
        public Pair(int start, int end) {
            this.start = start;
            this.end = end;
        }
        
        public int compareTo(Pair p) {
            return this.end - p.end;
        }
    }
    
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    public static int activitySelection(int start[], int end[], int n) {
        Pair arr[] = new Pair[n];
        for(int i=0; i<n; i++) {
            arr[i] = new Pair(start[i], end[i]);
        }
        
        Arrays.sort(arr);
        
        int ans = 0;
        
        int prevEnd = -1;
        for(int i=0; i<n; i++) {
            if(arr[i].start > prevEnd) {
                ans++;
                prevEnd = arr[i].end;
            }
        }
        
        return ans;
    }
}
