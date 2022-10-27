public static int getRightMostSetBit(int n) {
    if(n==0)
        return 0;
        
    return (int)(Math.log(n & -n)/Math.log(2.0)) + 1; //finding the rightmost set bit of a number
}

public static int posOfRightMostDiffBit(int m, int n) {
    if(m==n) {
        return -1; //if numbers are same then they have same bits
    }
    return getRightMostSetBit(m ^ n); //xor the numbers and find their rightmost set bit.
    //xor only sets the dissimilar bits and unsets similar bits
}
