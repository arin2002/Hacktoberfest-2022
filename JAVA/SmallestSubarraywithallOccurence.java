class Solution{
    
  
    ArrayList<Integer> smallestSubsegment(int arr[], int n) {
        ArrayList<Integer> ans = new ArrayList<>();
        
        HashMap<Integer, Integer> fmap = new HashMap<>();
        HashMap<Integer, Integer> fomap = new HashMap<>();
        
        int freq = 0, s = 0, e = 0, l = 0;
        
        for(int i=0; i<arr.length; i++) {
            fmap.put(arr[i], fmap.getOrDefault(arr[i], 0) + 1);
            fomap.putIfAbsent(arr[i], i);
            
            if(fmap.get(arr[i]) > freq) {
                freq = fmap.get(arr[i]);
                s = fomap.get(arr[i]);
                e = i;
                l = e - s + 1;
            } else if(fmap.get(arr[i]) == freq && l  > (i - fomap.get(arr[i]) + 1) ) {
                s = fomap.get(arr[i]);
                e = i;
                l = e - s + 1;
            }
        }
        
        for(int i=s; i<=e; i++) ans.add(arr[i]);
        return ans;
    }
}
