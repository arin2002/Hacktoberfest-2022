#include <bits/stdc++.h>
using namespace std;

int minCut(string a)
{
	int cut[a.length()];
	bool palindrome[a.length()][a.length()];
	memset(palindrome, false, sizeof(palindrome));
	for (int i = 0; i < a.length(); i++)
	{
		int minCut = i;
		for (int j = 0; j <= i; j++)
		{
			if (a[i] == a[j] && (i - j < 2 || palindrome[j + 1][i - 1]))
			{
				palindrome[j][i] = true;
				minCut = min(minCut, j == 0 ? 0 : (cut[j - 1] + 1));
			}
		}
		cut[i] = minCut;
	}
	return cut[a.length() - 1];
}

// Driver code
int main()
{
	cout << minCut("aab") << endl;
	cout << minCut("aabababaxx") << endl;
	return 0;
}

// This code is contributed by divyesh072019.
