static boolean substring(String a, String b) {
    int t = 0;
    int l = a.length();
    int i;
    for(i=0; i<l; i++) {

        if(t == b.length()) break;

        if(a.charAt(i) == b.charAt(t)) t++;
        else t = 0;
    }

    return t < b.length() ? false : true;
}
