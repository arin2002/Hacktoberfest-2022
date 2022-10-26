public List<List<String>> Anagrams(String[] str) {
        
    Map<String, List<String>> map = new HashMap<>();

    for(String s: str) {
        char charArray[] = s.toCharArray();
        Arrays.sort(charArray);
        String sorted = new String(charArray);

        if(!map.containsKey(sorted)) {
            map.put(sorted, new LinkedList<String>());
        }
        map.get(sorted).add(s);
    }

    return new LinkedList<>(map.values());
}
