// C++ program for equal range algorithm
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> v = { 10, 10, 30, 30, 30, 100, 10,
					300, 300, 70, 70, 80 };

	std::pair<std::vector<int>::iterator,
			std::vector<int>::iterator> ip;

	sort(v.begin(), v.end());


	ip = std::equal_range(v.begin(), v.begin() + 12, 30);

	cout << "30 is present in the sorted vector from index "
		<< (ip.first - v.begin()) << " till "
		<< (ip.second - v.begin());

	return 0;
}
