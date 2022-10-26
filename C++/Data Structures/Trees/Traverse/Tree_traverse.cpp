#include <bits/stdc++.h>
using namespace std;

int main()
{

	// Get the set
	int arr[] = { 14, 12, 15, 11, 10 };

	// initializes the set from an array
	set<int> s(arr, arr + sizeof(arr) / sizeof(arr[0]));

	// declare iterator on set
	set<int>::iterator it;

	cout << "Elements of Set in normal order:\n";

	// prints all elements in normal order
	// using begin() and end() methods
	for (it = s.begin(); it != s.end(); it++)
		cout << *it << " ";

	// declare reverse_iterator on set
	set<int>::reverse_iterator rit;

	cout << "\nElements of Set in reverse order:\n";

	// prints all elements in reverse order
	// using rbegin() and rend() methods
	for (rit = s.rbegin(); rit != s.rend(); rit++)
		cout << *rit << " ";

	return 0;
}
