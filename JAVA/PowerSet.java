public List<String> AllPossibleStrings(String s) {
    ArrayList<String> a = new ArrayList<>();
    int n = s.length();
    for(int i=0; i<(1<<n); i++) {
        String temp = "";
        for(int j=0; j<n; j++) {
            if((i&(1<<j)) != 0) temp += s.charAt(j);
        }
        a.add(temp);
    }

    a.remove(0);
    Collections.sort(a);
    return a;
}
