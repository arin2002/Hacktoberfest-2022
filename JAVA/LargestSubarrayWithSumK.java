public static int lenOfLongSubarr (int arr[], int n, int sum) {
    HashMap<Integer, Integer> map = new HashMap<>();

    int start = 0, end = -1, size = 0, curSum = 0;

    for(int i=0; i<n; i++) {

        curSum += arr[i];

        if(curSum == sum) {
            start = 0;
            end = i;

            size = end + 1;
        }

        if(!map.containsKey(curSum)) {
            map.put(curSum, i);
        }

        if(map.containsKey(curSum - sum)) {
            start = map.get(curSum - sum);
            end = i;

            size = Math.max(size, end - start);
        } 
    }

    return size;
}
