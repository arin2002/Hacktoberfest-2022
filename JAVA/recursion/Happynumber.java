static boolean happyNumber(int n) {
    if(n == 1 || n == 7) return true;

    else if(n<10) return false;

    else {
        int temp = 0;
        while(n>0) {
            temp += (n%10) * (n%10);
            n = n/10;
        }

        return happyNumber(temp);
    }
}

static int nextHappy(int n){
    if(happyNumber(n+1)) {
        return n+1;
    } else {
        return nextHappy(n+1);
    }
}
