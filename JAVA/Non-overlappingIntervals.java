class Solution {
    public int eraseOverlapIntervals(int[][] intervals) {
        Arrays.sort(intervals, (a,b) -> a[1] - b[1]);
        
        int min = 0;
        int newInterval[] = intervals[0];
        int i = 0;
        for(int cur[] : intervals) {
            if(newInterval[1] > cur[0] && i != 0) {
                min++;
            } else {
                newInterval = cur;
            }
            i++;
        }
        
        return min;
    }
}
