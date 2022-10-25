class Solution
{
    ArrayList<Integer> countDistinct(int arr[], int n, int k) {
        HashMap<Integer, Integer> map = new HashMap<>();
        
        int i = 0;
        for(; i<k; i++) {
            map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
        }
        
        ArrayList<Integer> ans = new ArrayList<>();
        
        ans.add(map.size());
        
        for(; i<n; i++) {
            if(map.get(arr[i-k]) == 1) {
                map.remove(arr[i-k]);
            } else {
                map.put(arr[i-k], map.get(arr[i-k])-1);
            }
            
            map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
            
            ans.add(map.size());
        }
        
        return ans;
    }
}
