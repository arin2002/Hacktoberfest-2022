/*
    Given two numbers a and b, Count the number of bits needed to be flipped to convert a to b.
    Example:    Input: a = 10, b = 20
                Output: 4
    Time Complexity: O(logn) 
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

// 1. Take xor of two no's and count number of set bits in it  TC: O(logn)
int countFlips(int a, int b)
{
    int count = 0;
    int xor = a ^ b;
    while (xor) {
        xor = xor & (xor - 1);
        count++;
    }
    return count;
}

// 2. Compare every bit with each other
int countFlips(int a, int b)
{
    int flips = 0;
    while(a > 0 || b > 0){
        int t1 = a & 1;
        int t2 = b & 1;
        if(t1 != t2)
            flips++;
        a >>= 1;
        b >>= 1;
    }
    return flips;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << countFlips(a, b) << "\n";
    return 0;
}