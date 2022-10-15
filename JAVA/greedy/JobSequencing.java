class Solution {
    // id, profit, deadline
    class sortComp implements Comparator<Job> {
        public int compare(Job j1, Job j2) {
            return j2.profit - j1.profit;
        }
    }
    
    //Function to find the maximum profit and the number of jobs done.
    int[] JobScheduling(Job arr[], int n) {
        Arrays.sort(arr, new sortComp());
        int maxD = 0;
        for(int i=0; i<n; i++) maxD = Math.max(arr[i].deadline, maxD);
        
        int t[] = new int[maxD+1];
        Arrays.fill(t, -1);
        
        int ans[] = new int[2];
        
        for(int i=0; i<n; i++) {
            int d = arr[i].deadline;
            
            while(d>=0 && t[d] != -1) d--;
            
            if(d > 0) {
                t[d] = arr[i].id;
                ans[1] += arr[i].profit;
                ans[0]++;
            }
        }
        
        return ans;
    }
}
