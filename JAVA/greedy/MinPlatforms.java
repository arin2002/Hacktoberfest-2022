lass Solution {
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    static int findPlatform(int arr[], int dep[], int n) {
        int platforms = 0, maxTrains = 0;
        
        int i = 0, j = 0;
        Arrays.sort(arr);
        Arrays.sort(dep);
        
        while(i<n && j<n) {
            if(arr[i] <= dep[j]) {
                i++;
                maxTrains++;
            } else {
                j++;
                maxTrains--;
            }
            
            platforms = Math.max(platforms, maxTrains);
        }
        
        return platforms;
    }
}
