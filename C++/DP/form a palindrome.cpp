
#include<bits/stdc++.h>
using namespace std;


// Recursive function to find
// minimum number of insertions
int findMinInsertions(char str[], int l, int h)
{
	// Base Cases
	if (l > h) return INT_MAX;
	if (l == h) return 0;
	if (l == h - 1) return (str[l] == str[h])? 0 : 1;

	// Check if the first and last characters are
	// same. On the basis of the comparison result,
	// decide which subproblem(s) to call
	return (str[l] == str[h])?
					findMinInsertions(str, l + 1, h - 1):
					(min(findMinInsertions(str, l, h - 1),
					findMinInsertions(str, l + 1, h)) + 1);
}


int main()
{
	char str[] = "geeks";
	cout << findMinInsertions(str, 0, strlen(str) - 1);
	return 0;
}

