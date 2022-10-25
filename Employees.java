import java.io.*;
import java.util.*;

public class Main {

  private static void findCount(HashMap<String, String> map) {
    HashMap<String, HashSet<String>> tree = new HashMap<>();
    String ceo = "";

    for (String emp : map.keySet()) {
      String man = map.get(emp);

      if (man.equals(emp)) {
        ceo = man;
      } else {
        if (tree.containsKey(man)) {
          HashSet<String> set = tree.get(man);
          set.add(emp);
        } else {
          HashSet<String> set = new HashSet<>();
          set.add(emp);
          tree.put(man, set);
        }
      }
    }
    
    HashMap<String, Integer> result = new HashMap<>(); 
    
    getValue(tree, ceo, result);
    
    for(String emp: result.keySet()) {
        System.out.println(emp + " " + result.get(emp));
    }
  }
  
  public static int getValue(HashMap<String, HashSet<String>> tree, String man, HashMap<String, Integer> result) {
      
      if(!tree.containsKey(man)) {
          result.put(man, 0);
          return 1;
      }
      
      int sz = 0;
      
      for(String emp: tree.get(man)) {
          int cs = getValue(tree, emp, result);
          sz += cs;
      }
      
      result.put(man, sz);
      
      return sz + 1;
  }

  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();

    HashMap<String, String> map = new HashMap<>();
    for(int i=0; i<n; i++) {
        map.put(scn.next(), scn.next());
    }
    
    findCount(map);
  }

}
