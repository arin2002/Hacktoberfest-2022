static int candies(int m, int n) {
    int x = (m*n) - m - n;
    HashSet<Integer> set = new HashSet<>();
    Queue<Integer> q = new LinkedList<>();

    set.add(x);
    q.add(x);

    int count = 0;
    while (!q.isEmpty()) {

        int cur = q.poll();
        count++;

        int key = cur - m;
        if(key > 0 && !set.contains(key)) {
            q.add(key);
            set.add(key);
        }

        key = cur - n;
        if(key > 0 && !set.contains(key)) {
            q.add(key);
            set.add(key);
        }
    }

    return count;
}
