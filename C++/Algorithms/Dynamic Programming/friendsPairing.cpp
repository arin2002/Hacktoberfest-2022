#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countFriendsPairings(int n)
    {
        if (n == 1)
            return 1;
        unsigned long long mod = 1000000007;
        int prev2 = 1;
        int prev1 = 2;
        for (int i = 3; i <= n; i++)
        {
            int curr = ((prev1) % mod + (((i - 1) % mod) * (prev2) % mod) % mod) % mod;
            prev2 = prev1 % mod;
            prev1 = curr % mod;
        }
        return prev1;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.countFriendsPairings(n);
        cout << endl;
    }
}
