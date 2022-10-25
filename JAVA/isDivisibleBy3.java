// Ist Method

int isDivisible(String s) {                  
    int odd = 0, even = 0;

    for(int i=0; i<s.length(); i++) {
        if(i%2 == 0) {
            even += s.charAt(i) - '0';
        } else {
            odd += s.charAt(i) - '0';
        }
    }

    if((even-odd) % 11 == 0) return 1;

    return 0;
}

// 2nd Method

int isDivisible(String s) {
  
    int sum = 0, x = 1;
  
    for(int i = s.length() - 1; i >= 0; i--){
        if((s.charAt(i) - '0') == 1){
            sum = (sum + x) % 3;
        }
        x = (x * 2) % 3;
    }  
}
