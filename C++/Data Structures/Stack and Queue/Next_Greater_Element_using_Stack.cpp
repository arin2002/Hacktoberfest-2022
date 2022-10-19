// C++ program the Next greater Element for an element x is the first greater element on the right side of x in the array. 
//Elements for which no greater element exist, consider the next greater element as -1. 
/*
Input:
Array[]=> {3 2 5 1}
Output:
Next Greater Elments:
2 --> 5
3 --> 5
1 --> -1
5 --> -1
*/
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void NGE(vector<int> arr){
	stack<int> s;
	int n=arr.size();
	s.push(arr[0]);
	cout<<"Next Greater Elments:\n";
	for (int i = 1; i < n; i++) {

		if (s.empty()) {
			s.push(arr[i]);
			continue;
		}
		while (s.empty() == false && s.top() < arr[i]) {
			cout << s.top() << " --> " << arr[i] << endl;
			s.pop();
		}
		s.push(arr[i]);
	}
	//For the remaining elements print -1 
	while (s.empty() == false) {
		cout << s.top() << " --> " << -1 << endl;
		s.pop();
	}
}
int main()
{
	int n,m,i,j;
	cout<<"Enter size of the Array: ";
    cin>>n;
	vector<int> arr(n,0);
    cout<<"Enter Elements:\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
	// Function call
	NGE(arr);
	return 0;
}

// Time Complexity = O(N)
