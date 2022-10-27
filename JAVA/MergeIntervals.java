public ArrayList<Interval> insert(ArrayList<Interval> intervals, Interval newInterval) {
    if(intervals == null) {
        intervals = new ArrayList<Interval>();
        intervals.add(newInterval);
        return intervals;
    } else if(intervals.size() == 0) {
        intervals.add(newInterval);
        return intervals;
    }

    Interval toInsert = newInterval;
    int i=0;
    while(i < intervals.size()) {
        Interval cur = intervals.get(i);

        if(newInterval.start > cur.end) {
            i++;
            continue;
        } else if(newInterval.end < cur.start) {
            intervals.add(i, newInterval);
            break;
        } else {
            newInterval.start = Math.min(cur.start, newInterval.start);
            newInterval.end = Math.max(cur.end, newInterval.end);
            intervals.remove(i);
        }
    }

    if(i == intervals.size()) {
        intervals.add(newInterval);
    }

    return intervals;
}
