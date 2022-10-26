class Pair {
    int a, b;
    
    Pair(int a, int b) {
        this.a = a;
        this.b = b;
    }
}

class Solution {
    
    int min_sprinklers(int gallery[], int n) {
        
        List<Pair> list = new ArrayList<>();
        int a, b;
        
        for(int i=0; i<n; i++) {
            if(gallery[i] > -1)  {
     
                a = i - gallery[i];
                b = i + gallery[i];
                
                list.add(new Pair(a, b));
            }
        }
        
        Collections.sort(list, new Comparator<Pair>() {
            @Override
            public int compare (Pair p1, Pair p2){
                return p1.a - p2.a;
            }
        });
        
        int target=0, s=0, i=0;
        
        while(target < n) {
            if(i == list.size() || list.get(i).a > target) {
                return -1;
            }
            
            int max_range = list.get(i).b;
            while(i+1 < list.size() && list.get(i+1).a <= target) {
                i++;
                max_range = Math.max(max_range, list.get(i).b);
            }
            
            if(max_range < target) return-1;
            
            s++;
            target = max_range + 1;
            i++;
        }
       
        return s;
    }
}
