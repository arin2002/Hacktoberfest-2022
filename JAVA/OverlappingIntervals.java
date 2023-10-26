public ArrayList<Interval> merge(ArrayList<Interval> intervals) {
        
    Collections.sort(intervals,new Comparator<Interval>(){
        @Override
        public int compare(Interval a, Interval b) {
            return a.start-b.start;
        }
    });
    ArrayList<Interval>res=new ArrayList<Interval>();
    int start=intervals.get(0).start;
    int end=intervals.get(0).end;
    for(int i=1;i<intervals.size();i++) {
        if(intervals.get(i).start<=end) {
            end=Math.max(intervals.get(i).end,end);
        }
        else {
            res.add(new Interval(start,end));
            start=intervals.get(i).start;
            end=intervals.get(i).end;
        }
    }
    res.add(new Interval(start,end));

    return res;
}

// M - 2
class Solution {
    
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (a,b) -> a[0]-b[0]);
        
        List<int[]> ans = new ArrayList<>();
        int newInterval[] = intervals[0];
        ans.add(newInterval);
        
        for(int cur[] : intervals) {
            if(newInterval[1] >= cur[0]) {
                newInterval[1] = Math.max(newInterval[1], cur[1]);
            } else {
                newInterval = cur;
                ans.add(newInterval);
            }
        }
        
        return ans.toArray(new int[ans.size()][2]);
    }
}
