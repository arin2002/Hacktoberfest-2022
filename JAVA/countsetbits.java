public static int countSetBits(int n) {

    // First calculate max x such that 2^x < n
    // Set bits from 1 to 2^x = 2^x-1 * x
    // Rest nos = (n - 2^x + 1) (First row) + countsetbits(n - 2^x)
    if(n == 0) return 0;
    
    int x = (int)(Math.log(n)/Math.log(2));

    return ((x * (1 << (x-1))) + (n - (1 << x) + 1) + countSetBits(n - (1 << x)));

    // return (int) ( (Math.pow(2, x-1)*x) + (n - Math.pow(2,x) + 1) + 
    //               countSetBits(n - (int)Math.pow(2,x)) );
}
