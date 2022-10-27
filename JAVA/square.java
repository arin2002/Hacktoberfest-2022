public static void main(String args[]) {
    System.out.println(square(8));
}

static int square(int n) {
    if(n == 0) return 0;

    if(n<0) n=-n;

    int floor = n>>1;

    if((n&1) == 0) {
        return square(floor) << 2;
    } else {
        return (square(floor) << 2) + (floor << 2) + 1;
    }
}
