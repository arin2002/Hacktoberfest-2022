int gcdadvanced(int a, int b) {
    if(a % b == 0) {
        return a/b;
    }

    return a/b + gcdadvanced(b, a%b);
}

int repeatedSubtraction(int a, int b) {
    return gcdadvanced(a, b);
}
