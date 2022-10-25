class Solution {
    
    static class Pair {
        int g, x, y;
        
        public Pair(int g, int x, int y) {
            this.g = g;
            this.x = x;
            this.y = y;
        }
        
    }
    
    static Pair gcdUtil(int a, int b) {
        if(b == 0) {
            Pair mp = new Pair(a, 1, 0);
            return mp;
        }
        
        Pair mp = gcdUtil(b, a%b);
        
        return new Pair(mp.g, mp.y, mp.x - ((a / b) * mp.y));
    }
    
    static int[] gcd(int a,int b){
        int ans[] = new int[3];
        int x = 0, y=0;
        Pair c = gcdUtil(a,b);
        ans[0] = c.g;
        ans[1] = c.x;
        ans[2] = c.y;
        
        return ans;
    }
}
