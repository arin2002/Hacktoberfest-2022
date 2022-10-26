import java.util.*;

public class Main {

	public static int solution(String str) {
		HashMap<Character, Integer> map = new HashMap<>();
		int ans = 0, j = -1;
		
		for(int i=0; i<str.length(); i++) {
		    char ch = str.charAt(i);
		    
		    while(map.containsKey(ch)) {
		        j++;
		        char c = str.charAt(j);
		        map.put(c, map.get(c) - 1);
		        if(map.get(c) == 0) map.remove(c);
		    }
		    map.put(ch, 1);
		    ans += i-j;
		}
		
		return ans;
	}
	
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		String str = scn.next();
		System.out.println(solution(str));
	}

}
