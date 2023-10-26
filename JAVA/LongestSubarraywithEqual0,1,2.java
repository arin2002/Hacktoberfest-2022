import java.util.*;

public class Main {

    public static int solution(int[] arr) {
        HashMap<String, Integer> map = new HashMap<>();
        int cz = 0, co = 0, ct = 0, ans = 0;
        
        map.put("0#0", -1);
        
        for(int i=0; i<arr.length; i++) {
            if(arr[i] == 0) cz++;
            else if(arr[i] == 1) co++;
            else ct++;
            
            String str = (co - cz) + "#" + (ct - co);
            
            if(map.containsKey(str)) {
                ans = Math.max(ans, i - map.get(str));
            } else {
                map.put(str, i);
            }
        }

        return ans;
    }
    
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scn.nextInt();
        }
        System.out.println(solution(arr));
    }

}
