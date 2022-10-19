#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
#include<cstring>
#include<map>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<cmath>
#include<conio.h>
#include<queue>
#include <utility>
typedef long long ll;
using namespace std;
int main()
{
	getch();
}
class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.length();
        if(n==1)
            return "";
        for(int i=0;i<n;i++)
        {
            if((palindrome[i]!='a'&&i!=n/2)||(palindrome[i]!='a'&&i==n/2&&n%2==0))
            {
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        palindrome[n-1]='b';
        return palindrome;
    }
};