static ArrayList <Integer> max_of_subarrays(int arr[], int n, int k) {
    ArrayList<Integer> ans = new ArrayList<>();

    Deque<Integer> dq = new LinkedList<>();

    int i=0;
    for(; i<k; i++) {
        while(!dq.isEmpty() && arr[dq.peekLast()] <= arr[i]) {
            dq.removeLast();
        }
        dq.addLast(i);
    }

    for(; i<n; i++) {
        ans.add(arr[dq.peekFirst()]);

        while(!dq.isEmpty() && dq.peekFirst() <= i-k) {
            dq.removeFirst();
        }

        while(!dq.isEmpty() && arr[dq.peekLast()] <= arr[i]) {
            dq.removeLast();
        }
        dq.addLast(i);
    }

    ans.add(arr[dq.peekFirst()]);

    return ans;
}
