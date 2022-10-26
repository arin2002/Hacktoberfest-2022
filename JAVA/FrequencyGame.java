public static int LargButMinFreq(int arr[], int n) {

    HashMap<Integer, Integer> map = new HashMap<>();
    for(int i = 0 ; i < n; i++) {
         int key = arr[i];
         if(map.containsKey(key)) {
             int freq = map.get(key);
             freq++;
             map.put(key, freq);
         } else {
             map.put(key, 1);
         }
    }

    int minfreq = Integer.MAX_VALUE, res = -1;
    for(Map.Entry<Integer, Integer> ent: map.entrySet()) {
         if (minfreq >= ent.getValue() && res < ent.getKey()) { 
             res = ent.getKey(); 
             minfreq = ent.getValue(); 
         } 
    }
    return res;
}
