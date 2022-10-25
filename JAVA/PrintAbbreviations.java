static void printAbbreviations(String s) {
    int n = (1 << s.length());

    for(int i=0; i<n; i++) {
        int count = 0;
        String ans = "";

        for(int j=0; j<s.length(); j++) {
            char c = s.charAt(j);
            int b = s.length() - j - 1;

            if((i & (1 << b)) == 0) {
                if(count == 0) {
                    ans += c;
                } else {
                    ans += count;
                    ans += c;
                    count = 0;
                }
            } else {
                count++;
            }
        }

        if(count > 0) {
            ans += count;
        }

        System.out.println(ans);
    }
}
