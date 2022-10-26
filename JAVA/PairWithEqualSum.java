
class Solution { 
    public int findPairs(int arr[],int n) { 
        HashSet<Integer> set = new HashSet<>();
        
        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                int sum = arr[i] + arr[j];
                
                if(set.contains(sum)) return 1;
                
                set.add(sum);
            }
        }
        return 0;
    }
}
