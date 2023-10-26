/*
    Given a positive integer N, print count of set bits in it i.e, count of 1s in its binary notation.
    Example:    Input: 6
                Output: 2 (110)
    Time Complexity: O(logn) 
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

/*
// 1. If log of the number on base 2 is an integer then the number is power of 2.   
bool isPowerofTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

// 2. Keep dividing the number by 2. If n%2 becomes non-zero and n is not 1 then n is not a power of 2. If n becomes 1 then it is a power of 2. 
bool isPowerofTwo(int n)
{
    if (n == 0)
        return false;
    while (n != 1) {
        if (n % 2 != 0)
            return false;
        n = n / 2;
    }
    return true;
}
*/

// 3. Powers of two have exactly one set bit
bool isPowerofTwo(int n)
{
    int count = 0;
    while (n) {
        n = n & (n - 1);
        count++;
    }
    if(count == 1)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    cout << isPowerofTwo(n) << "\n";
    return 0;
}