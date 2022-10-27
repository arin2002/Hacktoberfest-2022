public static int solution(String str, int k) {
    HashMap<Character,Integer> map = new HashMap<>();
    int ans = 0;
    for(int i = 0 , j = 0; i < str.length(); i++){
        char ch = str.charAt(i);
        map.put(ch,map.getOrDefault(ch, 0) + 1);
        while(map.size() > k){
            char chj = str.charAt(j);
            map.put(chj,map.get(chj) - 1);
            if(map.get(chj) == 0){
                map.remove(chj);
            }
            j++;
        }
        ans = Math.max(ans,i - j + 1);
    }
    return ans;
}
