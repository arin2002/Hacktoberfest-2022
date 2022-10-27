ArrayList<String> NBitBinary(int n) {
        
    ArrayList<String> list = new ArrayList<>();

    binary("", 0, n, list);

    return list;
}

void binary(String s, int ones, int rem, ArrayList<String> list) {
    if(rem == 0) {
        list.add(s);
        return;
    }

    binary(s+"1", ones + 1, rem-1, list);

    if(ones > 0) {
        binary(s+"0", ones - 1, rem-1, list);
    }
}
