static int setSetBit(int x, int y, int l, int r) {

    for(int i=l; i<=r; i++) {
        if((y & (1<<(i-1))) != 0) {
            x = x | (1<< (i-1));
        }
    }

    return x ;
}
