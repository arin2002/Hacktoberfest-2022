class Solution {
    public String fractionToDecimal(int num, int den) {
        StringBuilder sb = new StringBuilder();
        
        int q = num / den;
        int r = num % den;
        sb.append(q);
        if(r == 0) {
            return sb.toString();
        } else {
            sb.append(".");
            
            HashMap<Integer, Integer> map = new HashMap<>();
            
            while(r != 0) {
                if(map.containsKey(r)) {
                    int len = map.get(r);
                    sb.insert(len, "(");
                    sb.append(")");
                    break;
                } else {
                    map.put(r, sb.length());
                    r *= 10;
                    q = r / den;
                    r = r % den;
                    
                    sb.append(q);   
                }
            }
        }
        
        return sb.toString();
    }
}
