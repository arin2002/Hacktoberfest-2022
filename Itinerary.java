import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		int noofpairs_src_des = scn.nextInt();
		HashMap<String, String> map = new HashMap<>();
		for (int i = 0; i < noofpairs_src_des; i++) {
			String s1 = scn.next();
			String s2 = scn.next();
			map.put(s1, s2);	
		}

		//write your code here
        
        HashSet<String> set = new HashSet<>();
        
        for(String city: map.values()) {
            set.add(city);
        }
        
        String start = "";
        
        for(String city: map.keySet()) {
            if(!set.contains(city)) {
                start = city;
                break;
            }
        }
        
        int i = 0;
        System.out.print(start);
        while(i < map.size()) {
            i++;
            if(map.containsKey(start)) {
                System.out.print(" -> " + map.get(start));
                start = map.get(start);
            }
        }
        
        System.out.print(".");
	}
}
