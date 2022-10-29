#include <bits/stdc++.h>
using namespace std;
int findDepthRec(char tree[], int n, int& index)
{
	if (index >= n || tree[index] == 'l')
		return 0;
	index++;
	int left = findDepthRec(tree, n, index);
	index++;
	int right = findDepthRec(tree, n, index);

	return max(left, right) + 1;
}

int findDepth(char tree[], int n)
{
	int index = 0;
	return findDepthRec(tree, n, index);
}

int main()
{
	char tree[] = "nlnnlll";
	int n = strlen(tree);

	cout << findDepth(tree, n) << endl;

	return 0;
}
