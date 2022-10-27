class GfG {
    int maxLen(int arr[], int n) {
        int a = 0, b = -1, curSum = 0, size = 0;
        
        HashMap<Integer, Integer> map = new HashMap<>();
        
        for(int i=0; i<n; i++) {
            curSum += arr[i];
            
            if(curSum == 0) {
                a = 0;
                b = i;
                size = Math.max(size, b - a + 1);
            }
            
            if(map.containsKey(curSum)) {
                a = map.get(curSum) + 1;
                b = i;
                size = Math.max(size, b - a + 1);
            } else {
                map.put(curSum, i);
            }
        }
        
        return size;
    }
}
