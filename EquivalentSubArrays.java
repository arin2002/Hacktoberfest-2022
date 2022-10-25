class Solution { 
    // Method to calculate distinct sub-array 
    static int countDistinctSubarray(int arr[], int n) { 
        HashSet<Integer> set = new HashSet<>();
        
        for(int a: arr) set.add(a);
        HashMap<Integer, Integer> map = new HashMap<>();
        int ue = set.size(), i=-1, j=-1;
        
        int ans = 0;
        
        while(true) {
            boolean f1 = false, f2 = false;
            // Acquire
            while(i < arr.length-1 && map.size() != ue) {
                f1 = true;
                i++;
                map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
                
            }
            
            // Collect and Release
            while(j < i && map.size() == ue) {
                f2 = true;
                
                j++;
                ans += n-i;
                
                if(map.get(arr[j]) == 1) map.remove(arr[j]);
                else map.put(arr[j], map.get(arr[j])-1);
            }
            
            if(!f1 && !f2) break;
        }
        
        return ans;
    }
}
