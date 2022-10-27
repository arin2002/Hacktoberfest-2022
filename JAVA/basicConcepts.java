static int clearBit(int n, int i) {
    int mask = ~(1 << i);
    return mask & n;
}

static int getBit(int n, int i) {
    return (n & (1 << i)) != 0 ? 1 : 0;
}

static int setBit(int n, int i) {
    return (n | (1 << i));
}

static int updateBit(int n, int i, int value) {
    int mask = ~(1<<i);
    n = n & mask;

    return (n | (value<<i));
}
