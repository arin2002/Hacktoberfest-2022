// C++ program to implement a
// linked list
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

// Driver's code
int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	// allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third = new Node();


	head->data = 1; // assign data in first node
	head->next = second; // Link first node with
	// the second node

	third->data = 3; // assign data to third node
	third->next = NULL;

	return 0;
}

// This