// calculate x^y in O(logn)

#include <bits/stdc++.h>
using namespace std;

int binPow(int x, int y)
{
    int res = 1;

    while (y)
    {
        if (y % 2 == 1)
            res *= x;

        x *= x;
        y /= 2;
    }

    return res;
}

int main()
{
    int x, y;
    cin >> x >> y;

    cout << binPow(x, y);
}