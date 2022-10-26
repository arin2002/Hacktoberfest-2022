class Solution {
    public String reorganizeString(String s) {
        HashMap<Character, Integer> map = new HashMap<>();
        
        for(char ch: s.toCharArray()) {
            map.put(ch, map.getOrDefault(ch, 0) + 1);
        }
        
        PriorityQueue<Character> pq = new PriorityQueue<>((a,b) -> map.get(b) - map.get(a));
        
        pq.addAll(map.keySet());
        
        StringBuilder sb = new StringBuilder();
        while(pq.size() > 1) {
            char cur = pq.remove();
            char next = pq.remove();
            
            sb.append(cur);
            sb.append(next);
            
            map.put(cur, map.get(cur)-1);
            map.put(next, map.get(next)-1);
            
            if(map.get(cur) > 0) {
                pq.add(cur);
            }
            if(map.get(next) > 0) {
                pq.add(next);
            }
        }
        
        if(!pq.isEmpty()) {
            char last = pq.remove();
            if(map.get(last) > 1) {
                return ""; 
            }
            sb.append(last);
        }
        
        return sb.toString();
    }
}
