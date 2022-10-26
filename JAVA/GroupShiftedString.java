public static ArrayList<ArrayList<String>> groupShiftedStrings(String[] strs) {
  HashMap<String, ArrayList<String>> map = new HashMap<>();

  for(String str: strs) {
      String check = "";
      for(int i=1; i<str.length(); i++) {
          int diff = str.charAt(i) - str.charAt(i-1);
          if(diff < 0) diff += 26;
          check += diff + "#";
      }

      if(!map.containsKey(check)) {
          map.put(check, new ArrayList<>());
      }

      map.get(check).add(str);
  }

  return new ArrayList<>(map.values());
}
