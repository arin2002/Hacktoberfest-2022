public static int[] sortA1ByA2(int a1[], int n, int a2[], int m) {
        Arrays.sort(a1);
        
        LinkedHashMap<Integer, Integer> map = new LinkedHashMap<>();
        
        for(int i: a1) {
            if(!map.containsKey(i)) {
                map.put(i, 1);
            } else {
                map.put(i, map.get(i)+1);
            }
        }
        
        int index = 0;
        
        for(int i=0; i<a2.length; i++) {
            if(map.containsKey(a2[i])) {
                int x = map.get(a2[i]);
                while(x-- > 0) {
                    a1[index++] = a2[i];
                }
                map.remove(a2[i]);
            }
        }
        
        for(Map.Entry<Integer, Integer> ent : map.entrySet()) {
            int x = ent.getValue();
            while(x-- > 0) {
                a1[index++] = ent.getKey();
            }
        }
        
        // System.out.println(map);
        
        return a1;
    }
